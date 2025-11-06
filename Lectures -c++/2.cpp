#include<iostream>
using namespace std;

struct DCLL
{
    int data;
    DCLL *next, *prev;
};
DCLL *first, *temp, *ttemp:
void createfirst()
{
    first = new DCLL;
    cin>>first->data;
    first->next = first->prev = first;
}
void Add.Node()
{
    temp=first->prev;
    ttemp=new DCLL;
    cin>>ttemp->data;
    ttemp->next=first;
    first->prev=ttemp;
    temp->next=ttemp;
    ttemp->prev=temp;
}