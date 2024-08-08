#include<stdio.h>

void printArray(int *A,int n){

    for (int  i = 0; i < n; i++)
    {

        printf("%d ",A[i]);

    }
    printf("\n");
    
}

void selectionsort(int *A, int n)
{

    printf("Running selection sort....!\n");

    int indexofmin, temp;

    for (int i = 0; i < n - 1; i++)
    {
        indexofmin = i;

        for (int j = i + 1; j < n; j++)
        {

            if (A[j] < A[indexofmin])
            {
                indexofmin = j;
            }
        }

        temp = A[i];

        A[i] = A[indexofmin];

        A[indexofmin] = temp;

    }
}

int main()
{

    int A[] = {100,400,200,700,300,500}; 

    int n = 6;

    printArray(A,n);

    selectionsort(A,n);

    printArray(A,n);

    return 0;
}