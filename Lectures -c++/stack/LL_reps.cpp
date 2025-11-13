//Linked list representation of stack.

#include<iostream>
using namespace std;
struct Lstack
{ //2 field data and next of type struct Lstack*
    int data;
    struct Lstack *next;
};
Lstack *top, *temp; //global variables
void init()
{
    top = temp = NULL; // null value assigned to both the pointers
}
void Push(int x) //here x is the paarameter which is adding value to the stack.
{
    temp = new Lstack; //dynamic memory allocated 
    //if allocation fails,
    if(temp == NULL) //checkiing if stack is underflw
        return;
    temp->data = x;
    temp->next = top;
    top = temp; // updates the top pointer to point to temp.
}
int Pop() //removes element from stack.
{
    int x;
    if(top == NULL) //checks if stack is empty
        return -1;
        x=top->data; 
        temp=top;
        top=top->next;//updates the top pointer to point to next element
        temp->next=NULL;
        delete temp;//dlt the previous top value from memory
        return x;
}
int main()
{
    init();
    Push(10);
    Push(20);
    Push(30);
    cout<<Pop()<<endl;
    cout<<Pop()<<endl;
    cout<<Pop()<<endl;
    return 0;
}