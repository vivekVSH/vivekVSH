#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;

    struct Node * next;
};

void Link_list_traversal(struct Node* ptr){

    while (ptr != NULL)
    {

        printf("Element: %d\n", ptr->data);

        ptr = ptr->next;
    }
}

int main()
{
 //allocate memory for the node in the link list in heap

    struct Node * head;

    struct Node * second;

    struct Node * third;

    struct Node* fourth;

    head = (struct Node *) malloc (sizeof(struct Node));

    second = (struct Node *) malloc (sizeof(struct Node));

    third = (struct Node * ) malloc (sizeof(struct Node));

    fourth = (struct Node *) malloc (sizeof(struct Node));

 //link first and second node

    head->data = 10;

    head->next = second;

 //link second and third node

    second->data = 20;

    second-> next = third;

 //link third and fourth  node

    third->data = 30;

    third->next = fourth;

 //link the last node

    fourth->data = 40;

    fourth->next = NULL;

    Link_list_traversal(head); 


    return 0;
}