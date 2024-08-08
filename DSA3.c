#include<stdio.h>

//this code for the linear search 

/*int linearSearch(int arr[], int size, int element){

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==element)
        {
            return i;
        }
        
    }

    return -1;

}*/

//this code for the binary search 

int binarySearch(int arr[], int size, int element){

    int mid , low ,high;

    low = 0;
    high = size-1;

    while (low <= high)
    {

        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }

        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {1,4,7,9,11,16,20,27,30,38,45,50};

    int size = sizeof(arr)/sizeof(int);

    int element = 20;

    //int searchIndex = linearSearch(arr,size,element);

    int searchIndex = binarySearch(arr,size,element);

    printf("The element %d was found at index %d \n",element,searchIndex);

    return 0;
}

//int size = sizeof(arr)/sizeof(int);