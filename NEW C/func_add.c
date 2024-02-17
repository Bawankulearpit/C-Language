#include<stdio.h>

int add(int a,int b);

int main()
{
    int a,b;

    printf("enter your numbers");
    scanf("%d%d",&a,&b);
    
    int sum = add(a,b);
    printf("the sum is %d\n",sum);
}
int add(int a,int b)
{
    int result;
    result = (a + b);
    return result;
}