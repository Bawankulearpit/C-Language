#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter your name: ");
    gets(str);

    printf("have a nice day %s\n",str);
}