#include<iostream>
#define MAX 5
using namespace std;

struct Stack{
    int data[MAX];
    int top;
};

Stack S, *p;

void init(){
    p=&S;
    p->top=-1;
}

int Empty(){
    if(p->top==-1)
     return 1;
 else
    return 0;
}

int Full(){
    if(p->top==MAX-1)
     return 1;
 else
    return 0;
}

void Push(int x){
    if(Full()){
     cout<<"Stack Overflow\n";
    return;
}
p->top++;
     p->data[++(p->top)]=x;
}

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
