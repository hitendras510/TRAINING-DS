#include<stdio.h>
int main(){
    char str[]="hello";
    int ln=strlen(str);
    int count=0;
    for(int i=0;i<ln;i++){
        for(int j=i+1;j<ln;j++){
            if(str[i]==str[j]){
                count ++;
            }
        }
    }
}