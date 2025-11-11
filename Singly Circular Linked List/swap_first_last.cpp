#include<iostream>
#define null 0
using namespace std;

struct scll{
    int data;
    scll *next;
};

scll *first,*temp,*ttemp,*p,*q;

void init(){
    first=temp=ttemp=null;
}

void create_first(int x){
    first=new scll;
    first->data=x;
    first->next=first;
}

void add_node(int x){
    temp=first;
    while(temp->next!=first){
        temp=temp->next;
    }
    ttemp=new scll;
    ttemp->data=x;
    ttemp->next=first;
    temp->next=ttemp;
}

void display(){
    temp=first;
    cout<<"Elements of Singly Circular Linked List"<<endl;
    do{
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    while(temp!=first);   
}

void swap_first_last(){
    temp=first;
    while(temp->next!=first){
        ttemp=temp;
        temp=temp->next;
    }
    p=first;
    q=p->next;
    temp->next=q;
    ttemp->next=p;
    p->next=temp;
    first=temp;
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
    display();

    return 0;
}