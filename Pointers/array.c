#include<stdio.h>
#include<string.h>
int main(){
char string1[50];
char * copy;
printf("Enter your name: ");
gets(string1);
copy=&string1[0];
for(int i=0;i<strlen(string1);i++){
    printf(" %c",*copy);
    copy++;
}
}

