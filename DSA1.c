#include<stdio.h>

void display(int arr[],int n){

  //code for the traversal....!

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

int indInsrtion(int arr[], int size, int element, int capacity, int index){
  
    //code for the insertion...!

    if (size>=capacity)
    {
        return -1;
    }

    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;

    return 1;
    
}

int main()
{
    int arr[100] = {1,4,8,100};

    int size = 4, element = (45,40), index = (3,4);

    printf("The original array is given below\n");

    display(arr,size);

    indInsrtion(arr, size, element, 100, index);

    size +=2;

    printf("\n\n");

    display(arr,size);

    printf("insertion is sucessfull\n\n");


    return 0;
}