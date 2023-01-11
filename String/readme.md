## **C Programming Practice**
## _String Related Problem_


### 1. Write a program in C to input a string and print it

```c
#include<stdio.h>
int main(){

    char str[100];
    printf("Input the string: ");
    gets(str);
    printf("The string you entered is: %s ",str);
return 0;
}
```

### 2. Write a program in C to find the length of a string without using library function

```c
#include <stdio.h>
void main(){
    char str[50];
    int i=0,j=0,size=0;
    printf("Enter your string: ");
    gets(str);

    while(str[i]!='\0'){
        size++;
        i++;
    }
printf("The size of the string is :%d \n",i);

return 0;
}


```

### 3. Write a program in C to separate the individual characters from a string

```c
#include <stdio.h>
void main(){
    char str[50];
    int i=0,j=0,size=0;
    printf("Enter your string: ");
    gets(str);

printf("The characters of the string are : \n");

        while(str[j] != '\0'){
            printf("%c ",str[j]);
            j++;
        }

return 0;
}

```

### 4. Write a program in C to print individual characters of string in reverse order

```c
#include<stdio.h>
int main(){
int i=0,size=0;
char name[50];

printf("Enter the string:");
gets(name);

while(name[i]!='\0'){
    size++;
    i++;
}
printf("Reverse string is: ");
for(i=size;i>=0;i--){
    printf(" %c",name[i]);
}

}

```

### 5. Write a program in C to count the total number of words in a string

```c
#include<stdio.h>
int main(){
char name[50];
int i=0,word=1;

printf("Enter the sentence: ");
gets(name);

while(name[i]!='\n'){
    if(name[i]==' '){
        word++;
    }
    i++;
}
printf("Number of word is %d",word);
}


```
### 6. Write a program in C to compare two strings without using string library functions

```c
#include<stdio.h>

int compare(char str1[], char str2[])
{
int flag=1, i=0;
while(str1[i]!='\0' && str2[i]!='\0'){
    if(str1[i]!=str2[i]){
        flag=0;
        break;
    }
    i++;
}
return flag;
}

int main(){
char str1[50],str2[50];
printf("Enter The first string: ");
fgets(str1,sizeof(str1),stdin);
printf("Enter The second string: ");
fgets(str2,sizeof(str2),stdin);
int check=compare(str1,str2);

if(check==1){
    printf("The above strings are same ");
}
else
    printf("The above strings are not same ");

return 0;
}

```
### 7. Write a program in C to count total number of alphabets, digits and special characters in a string

```c
#include<stdio.h>
int main(){

char ch[50];
int alpha=0,num=0,special=0,i=0;

    /* Input character from user */
    printf("Enter any string or character: ");
    fgets(ch,sizeof ch,stdin);

while(ch[i]!='\0'){
    /* Alphabet check */
    if((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z'))
    {
       alpha++;
    }
    else if(ch[i] >= '0' && ch[i] <= '9')
    {
        num++;
    }
    else{
            if(ch[i]!='\0')
                special++;
    }
    i++;
}
printf("Number of Alphabets : %d\n",alpha);
printf("Number of Numbers : %d\n",num);
printf("Number of Special Characters : %d\n",special-1);
return 0;
}

```
### 8. Write a program in C to copy one string to another string

```c
#include<stdio.h>

int main(){
char string1[50];
char string2[sizeof string1];
printf("Enter the string to be copied: ");
fgets(string1,sizeof string1,stdin);
int i=0;
while(string1[i]!='\0'){
    string2[i]=string1[i];
    i++;
}
printf("The text copied: %s\n",string2);
printf("String copied %d",i-1);
}

```
### 9. Write a program in C to count total number of vowel or consonant in a string

```c
#include <stdio.h>


void main()
{
    char str[100];
    int i, len, vowel, cons;

       printf("\n\nCount total number of vowel or consonant :\n");
       printf("----------------------------------------------\n");
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);

    vowel = 0;
    cons = 0;
    len = strlen(str);

    for(i=0; i<len; i++)
    {

        if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            cons++;
        }
    }
    printf("\nThe total number of vowel in the string is : %d\n", vowel);
    printf("The total number of consonant in the string is : %d\n\n", cons);
}

```
### 10. Write a program in C to find maximum occurring character in a string

```c
#include<stdio.h>
#include<string.h>

int main(){

char str[100];
printf("Enter the string: ");
fgets(str,sizeof str,stdin);
int size=strlen(str);

//int max_occur=1;
int freq[size];
char max_char=str[0],min_char=str[0];

for(int i=0;i<size;i++){
    freq[i]=1;
    for(int j=i+1;j<size;j++){
        if(str[i]==str[j] && str[i] != '0' && str[i] !=' '){
            freq[i]++;
            str[j]='0';
        }
    }
}

 int max=freq[0],min=freq[0];
 for(int i=0;i<size;i++){

    if(max<freq[i]){
        max=freq[i];
        max_char=str[i];
    }
 }

 printf("The maximum occured characters is: %c of %d times",max_char,max);


return 0;
}

```
### 11. Write a C program to sort a string array in ascending order

```c

```
### 12. Write a program in C to read a string through keyboard and sort it using bubble sort

```c

```
### 13. Write a program in C to extract a substring from a given string

```c

```
### 14. Write a C program to check whether a given substring is present in the given string

```c

```
### 15. Write a program in C to read a sentence and replace lowercase characters by uppercase and vice-versa

```c

```
### 16. Write a program in C to find the number of times a given word 'the' appears in the given string

```c

```
### 17. Write a program in C to remove characters in String Except Alphabets

```c

```
### 18. Write a program in C to Find the Frequency of Characters

```c

```
### 19. Write a program in C to Concatenate Two Strings Manually

```c

```
### 20. Write a program in C to find the largest and smallest word in a string

```c

```
### 21. Write a program in C to convert a string to uppercase

```c

```
### 22. Write a program in C to convert a string to lowercase

```c

```
### 23. Write a program in C to check whether a character is Hexadecimal Digit or not


```c

```
### 24. Write a program in C to check whether a letter is uppercase or not


```c

```
### 25. Write a program in C to replace the spaces of a string with a specific character


```c

```
### 26. Write a program in C to count the number of punctuation characters exists in a string

```c

```
### 27. Write a program in C to print only the string before new line character


```c

```
### 28. Write a program in C to check whether a letter is lowercase or not


```c

```
### 29. Write a program in C to read a file and remove the spaces between two words of its content 

```c

```
### 30. Write a program in C to check whether a character is digit or not

```c

```
### 31. Write a program in C to split string by space into words

```c

```
### 32. Write a C programming to find the repeated character in a given string

```c

```
### 33. Write a C programming to count of each character in a given string

```c

```
### 34. Write a C programming to convert vowels into upper case character in a given string

```c

```
### 35. Write a C programming to find the length of the longest substring of a given string without repeating character

```c

```
### 36. A given string contains the bracket characters '(', ')', '{', '}', '<', ‘>', '[' and ']', Write a C programme to check the said string is valid or not. The input string will be valid when open brackets and closed brackets are same type of brackets

```c

```
### 37. Write a C programming to multiple two given positive numbers represent as string. Return a string representation of the product

```c

```
### 38. Write a C programming to reverse all the vowels present in a given string. Return the new string

```c

```
### 39. Write a C programming to find the longest Palindromic substring from a given string. Return the substring

```c

```
### 40. Write a C programming to replace each lowercase letter with the same uppercase letter of a given string. Return the new string

```c

```
### 41. Write a C programming to calculate the length of longest common subsequence of two given strings. The strings consist of alphabetical characters.

```c

```
### 42. Find The Frequency Of Each Letter In A String

```c
#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(){

    char str[100]= "The quick brown fox jumps over the lazy dog!";
    int size=strlen(str);
    char c;
    int counts[26]={0};

    for(int i=0;i<size;i++){
        c=tolower(str[i]);
        if(c<='z' && c>='a'){
            counts[c-'a']++;
        }
    }

    for(int i=0;i<26;i++){
           if(counts[i]>0){
          printf(" %c   is    %d times\n",'a'+i,counts[i]);
            }

    }

return 0;
}

```
