#include<iostream>
using namespace std;
#define null 0
struct node
{
    int data;
    node *next,*prev;
};

node *temp,*ttemp,*p,*first,*q;

void init(){
    temp=ttemp=first=p=null;
}

void create_first(){
    first=new node;
    cout<<"Enter first node :"<<endl;
    cin>>first->data;
    first->next=first->prev=null;
}

void add_node(int x){ 
    temp=first;
    while(temp->next!=null){ 
            temp=temp->next;
       }
        ttemp=new node;
        ttemp->data=x;
        temp->next=ttemp;
        ttemp->prev=temp;
        ttemp->next=null;
    }


void display(){
    temp=first;
    while(temp!=null){ 
        cout<<temp->data<<endl;
        temp=temp->next; 
    }
}

void swap_first_last(){
    temp=first;
    ttemp=temp->next;
    p=first;
    while(p->next!=null){
        p=p->next;
    }
    q=p->prev;
    p->next=ttemp;
    ttemp->prev=p;
    p->prev=null;
    q->next=temp;
    temp->next=null;
    temp->prev=q;
    first=p;
}

int main(){
    init();
    create_first();
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