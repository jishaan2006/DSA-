#include<iostream>
#define null 0
using namespace std;

struct scll{
    int data;
    scll *next;
};

scll *first,*temp,*ttemp;

void init(){
    first=temp=ttemp=null;
}

void create_first(){
    first=new scll;
    cout<<"Enter data for first node :"<<endl;
    cin>>first->data;
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

int main(){
    init();
    create_first();
    add_node(20);
    add_node(30);
    add_node(40);
    add_node(50);
    add_node(60);
    display();

    return 0;
}