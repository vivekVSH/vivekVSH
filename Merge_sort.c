#include<stdio.h>

void printArray(int *A,int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d, ",A[i]);
    }
    printf("\n");
    
}

void Merge(int A[], int mid, int low, int high)
{

    int i, j, k, B[100];

    i = low;

    j = mid + 1;

    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[j];

            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }

    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
    
}

void Mergesort(int A[], int low, int high){

    int mid;

    if (low<high)
    {
        mid = (low + high)/2;

        Mergesort(A, low, mid);

        Mergesort(A, mid+1, high);

        Merge(A, mid, low, high);

    }
    

}

int main()
{
    int A[] = {32,32,5,11,67,78,3,44};

    int n = 8;

    printArray(A,n);

    Mergesort(A,0,7);

    printArray(A,n);

    
    return 0;
}