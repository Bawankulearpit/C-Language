#include<stdio.h>
char update(char arr[],int size)
{
    for (int i=0; i<= size; i++)
    {
        if (arr[i] == 'A'){
            arr[i] = 'P';
        }
        else if (arr[i] == 'P'){
            arr[i] = 'A';
        }
    }
}
char printArray(char arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ",arr[i]);
    }
}
int main()
{
    char arr[] ={'A','P','P','L','L','E'};
    int size = sizeof(arr) / sizeof(arr[0]);

    update(arr , size);  //call
    printArray(arr,size);
    return 0;
}