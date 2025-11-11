#include <iostream>
#define null 0
using namespace std;

struct node
{
    int data;
    node *next;
};
node *first, *temp, *ttemp, *p,*curr,*nxt;

void init()
{
    first = temp = ttemp =nxt= null;
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

void reverse(){
    p=null;
    curr=first;
    while(curr!=null){
        nxt=curr->next;
        curr->next=p;
        p=curr;
        curr=nxt;
    }
    first=p;

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
    disp();
    cout<<"After reversing"<<endl;
    reverse();
    disp();

    return 0;
}