#include<stdio.h>
#include<string.h>

int main()
{
    /*char str[] = "hello tejas";
    int length = strlen(str);
    printf("the length = %d \n",length);*/


    char str1[] = "hello guys";
    char str2[50];
    strcpy(str2,str1);

    printf("%s",str2);

    return 0;
}