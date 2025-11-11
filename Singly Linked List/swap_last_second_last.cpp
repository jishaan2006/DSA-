#include <iostream>
#define null 0
using namespace std;

struct node
{
    int data;
    node *next;
};
node *first, *temp, *ttemp, *p;

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

void swap_last_secondlast(){
    temp=first;
    while(temp->next->next->next!=null){
        temp=temp->next;
    }
    ttemp=temp->next;
    p=ttemp->next;
    temp->next=p;
    p->next=ttemp;
    ttemp->next=null;
}

int main()
{
    int a;
    init();
    createfirst(10);
    addnode(20);
    addnode(30);
    addnode(40);
    addnode(50);
    swap_last_secondlast();
    disp();

    return 0;
}