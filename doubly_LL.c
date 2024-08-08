#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;

    struct Node * next;

    struct Node* prev;
};

void Double_Link_list_traversal(struct Node* ptr){

    while (ptr != NULL)
    {

        printf("Element: %d\n", ptr->data);

        ptr = ptr->next;
    }
}

int main()
{
 //allocate memory for the node in the link list in heap

    struct Node * first;

    struct Node * second;

    struct Node * third;

    struct Node* fourth;

    first = (struct Node *) malloc (sizeof(struct Node));

    second = (struct Node *) malloc (sizeof(struct Node));

    third = (struct Node * ) malloc (sizeof(struct Node));

    fourth = (struct Node *) malloc (sizeof(struct Node));

 //link first and second node

    first->data = 10;

    first->next = second;

    first->prev = NULL;

 //link second and third node

    second->data = 20;

    second-> next = third;

    second->prev = first;

 //link third and fourth  node

    third->data = 30;

    third->next = fourth;

    third->prev = second;

 //link the last node

    fourth->data = 40;

    fourth->next = NULL;

    fourth->prev = third;

    printf("The list are show in below \n");

    Double_Link_list_traversal(first); 


    return 0;
}