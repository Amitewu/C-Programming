## **C Programming Practice**
## _String Related Problem_


### 1. Write a program in C using pointers to print all the array element 

```c
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

```

### 2.Write a program in C to add two numbers using pointers

```c
#include<stdio.h>
int main(){
int *a1,*a2,sum;
int b1,b2;
printf("Enter first number:");
scanf("%d",&b1);
printf("Enter second number:");
scanf("%d",&b2);
a1=&b1;
a2=&b2;
sum=*a1+*a2;
printf("The sum is: %d",sum);
return 0;
}

```