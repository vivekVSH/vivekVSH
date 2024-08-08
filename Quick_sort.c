#include<stdio.h>

void printArray(int *A,int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d, ",A[i]);
    }
    printf("\n");
    
}

int partition(int A[],int Low,int High){

    int pivot = A[Low];

    int temp;

    int i = Low+1;

    int j = High;

    do
    {

        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];

            A[i] = A[j];

            A[j] = temp;
        }

    } while (i<j);

    temp = A[Low];

    A[Low] = A[j];

    A[j] = temp;

    return j;


}

void Quicksort(int A[],int Low,int High){

    int partitionIndex;

    if (Low < High)
    {

        partitionIndex = partition(A, Low, High);

        Quicksort(A, Low, partitionIndex - 1);  //sort left subarray

        Quicksort(A, partitionIndex + 1, High);  //sort right subarray
    }
}

int main()
{
    int A[] = {300,700,200,800,100,400};

    int n = 6;

    printArray(A,n);

    Quicksort(A,0,n-1);

    printf("The element are sorted in given order\n");

    printArray(A,n);

    return 0;
}