## **C Programming Practice**
## Pointer Related Problem_


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

### 3.Write a program in C to add numbers using call by reference

```c
#include<stdio.h>
int sum(int *a,int *b){
int sum=*a+*b;
return sum;
}
int main(){
int a1,a2;
printf("Enter first integer number:");
scanf("%d",&a1);
printf("Enter second integer number:");
scanf("%d",&a2);

printf("The sum of %d and %d is %d",a1,a2,sum(&a1,&a2));

}

```

### 4.Write a program in C to find the maximum number between two numbers using a pointer
```c
#include<stdio.h>

int main()
{
    int a1,a2;
    printf("Enter first number: ");
    scanf("%d",&a1);
    printf("Enter second number: ");
    scanf("%d",&a2);
    compare(&a1,&a2);
  getch();
}

void compare(int *a,int *b){
    if(*a>*b){
        printf("%d is greter than %d",*a,*b);
    }
    else
        printf("%d is greter than %d",*b,*a);
}

```

### 5.Write a program in C to store n elements in an array and print the elements using pointer

```c
#include<stdio.h>
int main(){
char str[50];
printf("Enter the string: ");
fgets(str,sizeof str, stdin);

char *c;
c=&str[0];
printf("You entered the string: ");
for(int i=0;i<strlen(str);i++){
    printf("%c",*c);
    c++;
}
return 0;
}

```

