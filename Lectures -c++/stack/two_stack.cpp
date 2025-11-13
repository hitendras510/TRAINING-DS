//making two stacks.
#include<iostream>
using namespace std;
#define MAX 5
/** Index:  0   1   2   3   4
        -----------------
data:  |   |   |   |   |   |
        -----------------

topA = -1  (before index 0)
topB = 5   (after index 4) 
 */

struct Stack
{
int data[MAX]; //array data of size max 
int topA, topB;    
};

Stack S; 
Stack *P;

void init(){
    //inital state before performing any operation
    P=&S;
    P->topA=-1;
    P->topB=MAX;
    /**Index of top of Stack A
Starts from -1 meaning Stack A is EMPTY.
while on the other hand ,
Index of top of Stack B
Starts from MAX meaning Stack B is EMPTY.
**/
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
P->data[P->topA]=x; //insert element.
/** USING CHATGPT FOR DIAGRAM AND BETTER UNDERSTANDING.
Index:  0    1    2    3    4
        ------------------------
data:  |10 |20 |    |40 |30 |
        ------------------------
topA=1
topB=3

 */
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
/** 
  Dry Run Table
 Operation       | topA | topB | Returned | Array--------------------------------------------------------------
init()          |  -1  |   5  |    -     | [ _  _  _  _  _ ]
 pushA(10)       |   0  |   5  |    -     | [10 _  _  _  _ ]
 pushA(20)       |   1  |   5  |    -     | [10 20 _ _ _ ]
 pushB(30)       |   1  |   4  |    -     | [10 20 _ _ 30]
 pushB(40)       |   1  |   3  |    -     | [10 20 _ 40 30]
 PopA()          |   0  |   3  |   20     | [10 20 _ 40 30]
 PopB()          |   0  |   4  |   40     | [10 20 _ 40 30]
 PopA()          |  -1  |   4  |   10     | [10 20 _ 40 30]
 PopB()          |  -1  |   5  |   30     | [10 20 _ 40 30]
 */