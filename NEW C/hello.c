#include<stdio.h>
#include<string.h>

int main()
{
    /*char str[] = "hello arpit";
    int length = strlen(str);
    printf("the length is %d\n",length);*/

    char str1[] = "hello";
    char str2[50];
    strcpy(str2,str1);

    printf("%s ",str2);

}