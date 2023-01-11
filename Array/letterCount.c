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
