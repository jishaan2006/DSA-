#include<iostream>
using namespace std;
#define null 0
struct dcll
{
    int data;
    dcll *next,*prev;
};

dcll *temp,*ttemp,*p,*first,*q;

void init(){
    temp=ttemp=first=p=null;
}

void create_first(int x){
    first=new dcll;
    first->data=x;
    first->next=first->prev=first;
}

void add_node(int x){ 
    temp=first;
    while(temp->next!=first){ 
        temp=temp->next;
    }
    ttemp=new dcll;
    ttemp->data=x;
    temp->next = ttemp;
    ttemp->prev = temp;
    ttemp->next = first;
    first->prev = ttemp;
    }


void display(){
    temp=first;
    do{ 
        cout<<temp->data<<endl;
        temp=temp->next; 
    }while(temp!=first);
}

void swap_first_last(){
    temp=first;
    ttemp=temp->next;
    p=temp->prev;
    q=p->prev;
    
    q->next=temp;
    temp->prev=q;
    temp->next=p;
    p->prev=temp;
    p->next=ttemp;
    ttemp->prev=p;
    first->prev=p;
    first=p;
}
int main(){
    init();
    create_first(10);
    add_node(20);
    add_node(30);
    add_node(40);
    add_node(50);
    add_node(60);
    swap_first_last();
    cout<<"doubly linked list :"<<endl;
    display();
    return 0;


}