#include <stdio.h>

binarysearch(int arr[], int size, int element)
{
    int low = 0;
    int high = size - 1;

    while (low < high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element =  8;

    int searchIndex = binarysearch(arr,size,element);

    printf("the element %d found at loaction %d",element,searchIndex);

    return 0;
}