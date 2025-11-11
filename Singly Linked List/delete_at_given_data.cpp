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
void delete_at_given_data(int x)
{
  temp = first;
  while (temp->data != x)
  {
    ttemp=temp;
    temp=temp->next;
    p=temp->next;
  }
  ttemp->next=p;
  temp->next=null;
  delete temp;
}
int main()
{
  init();
  createfirst(10);
  addnode(20);
  addnode(30);
  addnode(40);
  addnode(50);
  delete_at_given_data(30);
  disp();
}
