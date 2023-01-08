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

```
### 6. Write a program in C to compare two strings without using string library functions

```c

```
### 7. Write a program in C to count total number of alphabets, digits and special characters in a string

```c

```
### 8. Write a program in C to copy one string to another string

```c

```
### 9. Write a program in C to count total number of vowel or consonant in a string

```c

```
### 10. Write a program in C to find maximum occurring character in a string

```c

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
### Write a C programming to calculate the length of longest common subsequence of two given strings. The strings consist of alphabetical characters.

```c

```

