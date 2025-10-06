#include<stdio.h>
#include <string.h>
int main(){


    // chstr[] = "hii"; 
// for(int i=0;name[i]!='\0';i++){
//     printf("Name: %c \n", name[i]);
// };


// for(int i=0;name[i]!='\0';i++){
//     printf("%s",name);
// }

/////////////////////////////////

// char name[]="HELLO";
// int ln= strlen(name);
// for(int i<=3;name[i]!='\0';i--){
//     printf("%s\n",name);
// }

//////////////

// char name[]="hii";
// char data[10];
// for(int i=0;name[i]!='\0';i++){
//     data[i] = name[i];
// }
// printf("%s",data);

//////////////////////PALINDROME






// char name[] = "wow"; 
// int ln= strlen(name);
// int isTrue=1;
// for(int i=0;i<ln/2;i++){
// if(name[i]!=name[ln-i-1]){
//         isTrue=0;
//         break;
//     }
// }
// printf("%s\n",name);

////////////////////////////////REMOVE DUPLICATE

char str[]="madam";
char ln = strlen[str];
int index = 0; //index

for(int i=0;i<ln;i++){
for(int j= 0; j<i;j++){
    if(str[i] == str[j]){
    break;
    }
}
if( j == i){
    str[index++]=str[i];
}
}














return 0;
}