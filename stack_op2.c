#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;

    struct Node* next;
};

void Link_list_traversal(struct Node *ptr){
    while (ptr != NULL)
    {
        printf("Element : %d\n",ptr->data);

        ptr = ptr->next;
    }
    
}

int isEmpty(struct Node * top){

    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    } 
}

int isFull(struct Node *top){

    struct Node *n = (struct Node*)malloc(sizeof(struct Node));

    if (n ==  NULL)
    {
       return 1;

    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x){
    if (isFull(top))
    {
        printf("strack is overflow\n");
    }
    else
    {
        struct Node *n = (struct Node*)malloc(sizeof(struct Node));

        n->data = x;

        n->next = top;

        top = n;

        return top;
    }
    
}

int pop(struct Node**top){
    if (isEmpty(*top))
    {
        printf("strck is underflow\n");
    }
    else
    {
        struct Node *n = *top;

        *top = (*top)->next;

        int x = n->data;

        free(n);

        return x;
    }
    
}

int peek(int pos, int top){

    struct Node* ptr = top;
    for (int i = 0;( i < pos-1 && ptr!=NULL); i++)
    {
        ptr = ptr->next;
    }

    if (ptr!=NULL)
    {
       return ptr->data; 
    }
    else
    {
        return -1;
    }
    
    
}
int main()
{
    struct Node* top = NULL;

    top = push(top,100);
    top = push(top,200);
    top = push(top,300);
    top = push(top,400);

    Link_list_traversal(top);

    for (int i = 0; i < 4; i++)
    {
        printf("value at position 1 is : %d\n", i,peek(i,top));
    }

    return 0;
}