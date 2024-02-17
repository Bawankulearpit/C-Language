#include<stdio.h>

void duplicate (int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Dulicate number is %d\n",arr[j]);
            }
            
        }
        
    }
}
int main()
{
    int arr[]= {1,2,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[arr[0]]);
    duplicate (arr,size);
}