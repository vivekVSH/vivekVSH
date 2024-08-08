#include<stdio.h>
#include<stdlib.h>

struct Node * f = NULL;

struct Node * r = NULL;

struct Node{

    int data;

    struct Node* next;
};

void Link_list_tra(struct Node *ptr)
{
    printf("printing the element of the link list\n");

    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);

        ptr = ptr->next;
    }
    
}

void enqueue(int val)
{
    struct Node *n = (struct Node*)malloc(sizeof(struct Node));

    if (n==NULL)
    {
        printf("Queue is Full");
    }
    else
    {
        n->data = val;

        n->next = NULL;

        if (f==NULL)
        {
           f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
        
    }
    
}

int dequeue()
{
    int val = -1;

    struct Node *ptr = f;

    if (f==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
       f = f->next;

       val = ptr->data;

       free(ptr);
        
    }
    return val;

    printf("The queue is empty");
    
}



int main()
{
    

    Link_list_tra(f);

    printf("Dequeue element %d\n",dequeue());

    enqueue(100);

    enqueue(200);

    enqueue(300);

    enqueue(400);

    printf("Dequeue element %d\n",dequeue());
    printf("Dequeue element %d\n",dequeue());
    printf("Dequeue element %d\n",dequeue());
    printf("Dequeue element %d\n",dequeue());
    

    Link_list_tra(f);

    return 0;
}