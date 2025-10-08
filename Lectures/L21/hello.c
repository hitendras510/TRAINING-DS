#include<stdio.h>
#include<string.h>
int main(){
//     char str[]="hello";
//     int ln= strlen(str);
//     int count=0;
//     for(int i=0;i<ln;i++){
//         count = 0;
//         for(int j=0;j<i;j++){
//             if(str[i]==str[j]){
//                 count ++;
//                 break;
//             }
//         }
//         if(count == 0)
//         {
//             printf("%c",str[i]);
//         }
//     }

char str[]="aiouabvs";
int vcount=0;
int ccount=0;
int ln= strlen(str);
for(int i=0;i<ln;i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        vcount++;
    }else{
        ccount++;
    }
    printf("%d %d",vcount,ccount);
}











}


