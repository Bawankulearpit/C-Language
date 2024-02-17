#include<stdio.h>

int main()
{
    int arr[5];
   
    for (int i = 0; i < 5; i++)
    {
        printf("enter values ");
        scanf("%d",&arr[i]);
    }
        int size = 5;
        int count = 0;

    for (int i = 0; i < size; i++)
    {
        count = count + arr[i];
    }
        printf("the sum = %d\n",count);

    
}