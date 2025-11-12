#include<iostream>
#define MAX 5
using namespace std;

/** 
 * This class definition creates a `Stack` struct with an array `data` of size `MAX` and an integer `top` variable to keep track of the top element in the stack. It does not define any methods, but it can be used to implement stack operations like push, pop, and peek.

 */
struct Stack{
    int data[MAX];
    int top;
};

Stack S, *p;


/**
 * @brief Initializes the stack.
 * 
 * Initializes the stack by setting the stack pointer p to the stack S and setting the top of the stack to -1.
 */
void init(){
    p=&S;
    p->top=-1;
}


/**
 * @brief Checks if the stack is empty.
 * 
 * @return 1 if the stack is empty, 0 otherwise.
 */
int Empty(){
    if(p->top==-1)
     return 1;
 else
    return 0;
}


/**
 * @brief Checks if the stack is full.
 * @return 1 if the stack is full, 0 otherwise.
 */
int Full(){
    if(p->top==MAX-1)
     return 1;
 else
    return 0;
}

/**
This code snippet defines a function named `Push` that adds an element `x` to a stack. Before adding the element, it checks if the stack is full by calling the `Full` function. If the stack is full, it prints "Stack Overflow" and returns. If the stack is not full, it increments the `top` variable of the stack and adds the element `x` to the stack at the position indicated by `top`.
 */
void Push(int x){
    if(Full()){
     cout<<"Stack Overflow\n";
    return;
}
p->top++;
     p->data[++(p->top)]=x;
}


/**
 This code snippet defines a function named `Pop` that removes and returns the top element from a stack. It first checks if the stack is empty by calling the `Empty` function. If the stack is empty, it prints "Stack Underflow" and returns -1. Otherwise, it retrieves the value of the top element from the stack, decrements the `top` variable, and returns the value.
 */
int Pop(){
    int x;
    if(Empty()){
        cout<<"Stack Underflow\n";
        return -1;
    }
    x=p->data[p->top];
    p->top--;
    return x;
}

int main(){
    int a,b,c;
    init();
    Push(10);
    Push(20);
   a=Pop();
   b=Pop();
   c=Pop();

    cout<<"Popped values"<<a<< " "<<b<<" "<<c<<endl;
    
    return 0;
}
