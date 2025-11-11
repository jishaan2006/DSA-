#include<iostream>
#define null 0
using namespace std;

struct scll{
    int data;
    scll *next;
};

scll *first,*temp,*ttemp,*p;

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
    do{
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    while(temp!=first);   
}

void add_before_first(int x){
    temp=first;
    while(temp->next!=first){
        temp=temp->next;
    }
    ttemp=new scll;
    ttemp->data=x;
    ttemp->next=first;
    temp->next=ttemp;
    first=ttemp;
}
int main(){
    init();
    create_first(10);
    add_node(20);
    add_node(30);
    add_node(40);
    add_node(50);
    add_node(60);
    add_before_first(40);
    display();

    return 0;
}