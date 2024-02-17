#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,3,4,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                //printf("the duplicate is %d",arr[j]);
                return arr[j];
            }
            
        }
        
    }
    
}