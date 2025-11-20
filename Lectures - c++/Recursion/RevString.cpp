#include<iostream>
using namespace std;

void reverseStr(string &s, int i, int j ){
    if(i >= j) return;
    swap(s[i], s[j]);
    reverseStr(s, i+1, j-1);
}

int main(){
    string s = "abcd";
    reverseStr(s, 0, s.length()-1);
    cout<<s;
}