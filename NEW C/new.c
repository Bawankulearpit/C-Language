#include<stdio.h>

int binarySearch(int arr[], int size, int key){

    int low = 0;
    int high = size - 1;

    while (low < high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    int result = binarySearch(arr, size, key);

    printf("The Element %d is found at index = %d", key, result);

    return 0;

}