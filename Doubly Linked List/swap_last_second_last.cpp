#include<iostream>
using namespace std;
#define null 0
struct node
{
    int data;
    node *next,*prev;
};

node *temp,*ttemp,*p,*first;

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
 
void swap_last_second_last(){
    temp=first;
    while(temp->next!=null){
        temp=temp->next;
    }
    ttemp=temp->prev;
    p=ttemp->prev;
    p->next=temp;
    temp->prev=p;
    temp->next=ttemp;
    ttemp->prev=temp;
    ttemp->next=null;
}

int main(){
    int a;
    init();
    create_first();
    add_node(20);
    add_node(30);
    add_node(40);
    add_node(50);
    add_node(60);
    cout<<"doubly linked list :"<<endl;
    display();
    swap_last_second_last();
    cout<<"doubly linked list after swapping:"<<endl;
    display();
    return 0;
}