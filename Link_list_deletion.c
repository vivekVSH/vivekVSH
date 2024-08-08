#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node* next;
};

void Link_list_traversal(struct Node* ptr){

    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);

        ptr = ptr->next;
    }
}
//fuction for the delete first element in the link list

struct Node * deleteFirst(struct Node *head){

    struct Node* ptr = head;

    head = head->next;

    free(ptr);

    return head;

}

//this fuction for the delete the index at the index

struct Node * deleteAtindex(struct Node * head, int index){

    struct Node *p = head;

    struct Node *q = head->next;

    for (int i = 0; i < index-1; i++)
    {
        p = p->next;

        q = q->next;
    }

    p->next = q->next;

    free(q);
    

    return head;

}

//delete the last node in the link list

struct Node* deletelast(struct Node* head){

    struct Node *p = head;

    struct Node *q = head->next;

    while (q->next !=NULL)
    {
        p = p->next;

        q = q->next;
    }

    p->next = NULL;

    free(q);
    
    return head;

}

//this function for the value form the node

struct Node * deleteAtindel(struct Node * head,int value){

    struct  Node *p = head;

    struct Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;

        q = q->next;
    }

    if (q->data == value)
    {
       p->next = q->next; 

       free(q);
    }

    return head;
    
    

}

int main()
{

    struct Node* head;

    struct Node* second;

    struct Node* third;

    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node));

    second = (struct Node*)malloc(sizeof(struct Node));

    third = (struct Node*)malloc(sizeof(struct Node));

    fourth = (struct node*)malloc(sizeof(struct Node));

    head->data = 50;

    head->next = second;

    second->data = 100;

    second->next = third;

    third->data = 150;

    third->next = fourth;

    fourth->data = 200;

    fourth->next =  NULL;

    printf("Link List Before Deletion\n");

    Link_list_traversal(head);

 //for delete a first element in the link list 

   // head = deleteFirst(head);

 //this for the delete the node at the index

   // head = deleteAtindex(head, 2);

 //this fuction for the delete last node

  // head = deletelast(head);

  head = deleteAtindel(head,200);

    printf("Link List After Deletion\n");

    Link_list_traversal(head);

    return 0;
}