#include<iostream>
using namespace std;

struct DCLL
{
    int data;
    DCLL *next, *prev;
};

DCLL *first = NULL, *temp = NULL, *ttemp = NULL;

void createfirst()
{
    first = new DCLL;
    cout<<"Enter first node data: ";
    cin >> first->data;
    first->next = first->prev = first;
}

void AddNode()
{
    temp = first->prev; // Last node
    ttemp = new DCLL;
    cout<<"Enter node data to add at end: ";
    cin >> ttemp->data;

    ttemp->next = first;
    first->prev = ttemp;
    temp->next = ttemp;
    ttemp->prev = temp;
}

void addBeforeFirst()
{
    ttemp = new DCLL;
    cout<<"Enter node data to add before first: ";
    cin >> ttemp->data;

    ttemp->next = first;
    ttemp->prev = first->prev;

    first->prev->next = ttemp;
    first->prev = ttemp;

    first = ttemp; 
}

void disp()
{
    temp = first;
    cout<<"\nDoubly Circular Linked List: ";
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != first);
    cout << endl;
}

int main()
{
    createfirst();
    AddNode();
    addBeforeFirst();
    disp();
    return 0;
}
