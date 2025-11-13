//making two stacks.
#include<iostream>
using namespace std;
#define MAX 5

struct Stack
{
int data[MAX]; //array data of size max 
int topA, topB;    //two integer var.
};

Stack S; //STACK S AND *P
Stack *P;

void init(){
    //inital state before performing any operation
    P=&S;
    P->topA=-1;
    P->topB=MAX;
}

int emptyA(){
    if(P->topA==-1) //condition
    return 1; //indicates stack is empty
    else
    return 0;
}

int emptyB(){
    if(P->topB==MAX) //condition
    return 1; //indicates stack is empty
    else
    return 0;
}

int fullAB(){
    if(P->topA+1==P->topB) //condition
    return 1; //indicates stack is full
    else
    return 0;
}

void pushA(int x){
    if(fullAB()) //if stack is full
    return;
        P->topA++; //increment topA, becoz left to right case
P->data[P->topA]=x; //insert element
}

void pushB(int x){
    if(fullAB()) //if stack is full
    return;
        P->topB--; //decrement topB becoz right to left case
P->data[P->topB]=x; //insert element
}

int PopA(){
    int x;
    if(emptyA()) //if stack is empty
  return -1;
    x=P->data[P->topA]; //get element
    P->topA--; //decrement topA
    return x;
}

int PopB(){
    int x;
    if(emptyB()) //if stack is empty
  return -1;
    x=P->data[P->topB]; //get element
    P->topB++; //increment topB
    return x;
}

int main(){
    init();
    pushA(10);
    pushA(20);
    pushB(30);
    pushB(40);
    cout << "\nFrom A - " << PopA();
    cout << "\nFrom B - " << PopB();
    cout << "\nFrom A - " << PopA();
    cout << "\nFrom B - " << PopB();

    return 0;
}