#include<stdio.h>

//code for the display element in the array

void display(int arr[],int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}

//code for the deletion of the element...!

void indDeletion(int arr[],int size, int index){


    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
    
}

int main(){

    int arr[100] = {1, 2, 4, 7, 55};

    int size = 5, element = 45, index = 3;

    display(arr,size);

    printf("the element are deleted in follow");

    indDeletion(arr, size, index);

    size -=1;

    display(arr,size);

    return 0;
}