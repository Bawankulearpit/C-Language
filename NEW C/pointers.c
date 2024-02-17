#include<stdio.h>
int main() {

    int a = 34;
    int *ptr = &a;

    printf("the value of a is %d\n",a);  //value of a
    printf("the location of a is %d\n",*ptr); //value stored of a
    printf("the memory location is %d\n",ptr);  //location of memory
    printf("the value of *(&a)= %d\n", *(&a));  //reference
}