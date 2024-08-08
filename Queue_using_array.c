#include<stdio.h>
#include<stdlib.h>

struct queue{

    int size;

    int f;

    int r;

    int* arr;

};

int isEmpty(struct queue* q){

    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isFull(struct queue* q){

    if (q->r == q->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}


void enqueue(struct queue *q, int val){
    
    if (isFull(q))
    {
       printf("This queue is full");
    }
    else
    {
        q->r++;

        q->arr[q->r] = val;
    }
    
}

int dequeue(struct queue *q){

    int a = -1;

    if (isEmpty(q))
    {
        printf("The Queue is empty");
    }
    else
    {
       q->f++;

       a = q->arr[q->f]; 
    }
    return a;
    

}

int main()
{
    struct queue  *q;

    q->size = 100;

    q->f = q->r = -1;

    q->arr = (int *)malloc(q->size* sizeof(int));

    enqueue(&q, 100);

    enqueue(&q, 200);

    printf("dequeue element %d from the queue\n",dequeue(&q));

    printf("dequeue element %d from the queue\n",dequeue(&q));

    if (isEmpty(&q))
    {
        printf("Queue is empty");
    }
    else if (isFull(&q))
    {
        printf("Try after some time");
    }
    
    

    return 0;
}