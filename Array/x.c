#include <stdio.h>
#include <string.h>

int main()
{
    char x, y[20],z[100];
    scanf("%c",&x);
    fflush(stdin);
    fgets(y, sizeof(y), stdin);
    fflush(stdin);
    fgets(z,sizeof(z),stdin);
    fflush(stdin);
    printf("%c\n",x);
    printf("%s",y);
    printf("%s",z);

    return 0;
}
