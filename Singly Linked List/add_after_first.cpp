#include <iostream>
#define null 0
using namespace std;

struct node
{
  int data;
  node *next;
};
node *first, *temp, *ttemp,*p;

void init()
{
  first = temp = ttemp = null;
}
void addnode(int val)
{
  temp = first;
  while (temp->next != null)
  {
    temp = temp->next;
  }
  ttemp = new node;
  ttemp->data = val;
  ttemp->next = null;
  temp->next = ttemp;
}
void createfirst(int val)
{
  first = new node;
  first->data = val;
  first->next = null;
}
void disp()
{
  temp = first;
  while (temp != null)
  {
    cout << temp->data << endl;
    temp = temp->next;
  }
}

void add_after_first(int x){
    temp=first;
    ttemp=temp->next;
    p=new node;
    p->data=x;
    p->next=ttemp;
    temp->next=p;
}
int main()
{
  init();
  createfirst(10);
  addnode(20);
  addnode(30);
  addnode(50);
  addnode(60);
  add_after_first(100);
  disp();
}
