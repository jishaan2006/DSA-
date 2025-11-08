#include<stdlib.h>
#include<iostream>
#define null 0
using namespace std;

 struct node
{
  int data;
    node *next;
};
node *first,*temp,*ttemp;

void init()
{
 first=temp=ttemp=null;
}
void addnode(int val)
{
  temp=first;
  while(temp->next!=null)
  {
  temp=temp->next;

  }
  ttemp=new node;
  ttemp->data=val;
  ttemp->next=null;
  temp->next=ttemp;
}
void createfirst(int val)
{
 first=new node;
  first->data=val;
  first->next=null;
}
void disp()
{                   
 temp=first;
 while(temp!=null)
 {
   cout<<temp->data<<endl;
   temp=temp->next;
 }
}

void add_before_first(){
  temp=new node;
  cout<<"Enter data of new node :"<<endl;
  cin>>temp->data;
  temp->next=first;
  first=temp;
}
int main()
{
  init();
  createfirst(10);
	addnode(20);
	addnode(30);
	addnode(50);
	addnode(60);
  
  cout<<"Before adding new node brfore first :"<<endl;
  disp();
	
  add_before_first();
  cout<<"After adding new node brfore first :"<<endl;
	disp();

  return 0;
}