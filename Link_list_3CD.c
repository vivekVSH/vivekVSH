#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;

    struct Node * next;
};

//this function for the link list insertion of the element 

void Link_list_traversal(struct Node* ptr){

    while (ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);

        ptr = ptr->next;

    }
    
}

// this fuction for the insertion at the first node

struct Node * insertAtfirst(struct Node * head, int data){

    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

    ptr->next = head;

    ptr->data = data;

    return ptr;
}

//This fuction for the insertion at the index is given

struct Node* insertAtindex(struct Node *head ,int data, int index){

    struct Node* ptr = (struct Node*) malloc (sizeof(struct Node));

    struct Node * p = head;

    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;

    ptr->next = p->next;

    p->next = ptr;

    return head;
    

}

//this function is to insert the node at the end

struct Node *insertAtend(struct node *head, int data)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;

    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;

    ptr->next = NULL;

    return head;
}

//this  function for the insertion after the node

struct Node * insertAfterNode(struct Node*head, struct Node *prevNode,int data){

    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));

    ptr->data = data;

    struct Node * p = head;

    ptr->next = prevNode->next;

    prevNode->next = ptr;

    return head;
}

int main(){

    struct Node* head;

    struct Node* second;

    struct Node* third;

    struct Node* fourth;

    head = (struct Node*)malloc(sizeof(struct Node)); 

    second = (struct Node*)malloc(sizeof(struct Node));

    third = (struct Node*)malloc(sizeof(struct Node));

    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 50;

    head->next = second;

    second->data = 100;

    second->next = third;

    third->data = 150;

    third->next = fourth;

    fourth->data = 200;

    fourth->next = NULL;

    Link_list_traversal(head); 

    printf("Following element insertion are show\n");

    head = insertAtfirst(head,10);

    Link_list_traversal(head);

    printf("The insertion are happen in the middle\n");

    head = insertAtindex(head, 20, 2);

    Link_list_traversal(head);

    printf("the insertion are found in the end");

    head = insertAtend(head,250);

    Link_list_traversal(head);

    printf("insertion at the after Node\n");

    head = insertAfterNode(head, second, 115);

    Link_list_traversal(head);
    
    
    return 0;
}