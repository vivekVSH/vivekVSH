#include<stdio.h>

void printArray(int *A,int n){
    
    for (int  i = 0; i < n; i++)
    {
        printf("%d\n",A[i]);
    }
    

}

void bubblesort(int *A,int n){

    int temp;

    int isSorted = 0;

    for (int  i = 0; i < n-1; i++)  //for the number of pass in array 
    {
        printf("Working on number of pass %d\n",i+1);

        isSorted = 1;
    
        for (int j = 0; j < n-1-i; j++)  //for number of comparison in each pass 
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];

                A[j] = A[j + 1];

                A[j + 1] = temp;

                isSorted = 0;
            }
        }

        if (isSorted)
        {
            return;
        }
        
    }
    

}

int main()
{
    int A[] = {400,100,600,300,500,200};

    //int A[] = {5,6,7,8,9,10};
    
    int n = 6;

    printf("printing the array before sorting\n");

    printArray(A,n);

    bubblesort(A,n);

    printf("printing the array after sorting\n");

    printArray(A,n);
    
    return 0;
}