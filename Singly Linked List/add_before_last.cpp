#include<iostream>
#define null 0
using namespace std;

 struct node
{
  int data;
    node *next;
};
node *first,*temp,*ttemp,*p;

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

void add_before_last(int x){
  temp=first;
  while(temp->next!=null){
    ttemp=temp;
    temp=temp->next;
  }
  p=new node;
  p->data=x;
  ttemp->next=p;
  p->next=temp;
}


int main()
{
  int a;
  init();
  createfirst(10);
	addnode(20);
	addnode(30);
	addnode(50);
	addnode(60);
  
  cout<<"Before adding new node brfore last :"<<endl;
  disp();
	
  cout<<"Data to add before last :"<<endl;
  cin>>a;

  add_before_last(a);
  cout<<"After adding new node brfore last :"<<endl;
	disp();

  return 0;
}