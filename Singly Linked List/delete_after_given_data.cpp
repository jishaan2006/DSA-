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

void delete_after_given_data(int x)
{
    temp = first;
    while (temp->data!= x)
    {
        temp = temp->next;
        ttemp=temp->next;
        p=ttemp->next;
    }
    temp->next=p;
    ttemp->next=null;
    delete ttemp;
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

    cout << "Before deleting after given data :" << endl;
    disp();
    cout<<"Enter data to delete after :";
    cin>>a;
    cout<<"After deleting after given data :"<<endl;
    
    delete_after_given_data(a);
    disp();

    return 0;
}