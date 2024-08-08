#include <stdio.h>
#include <stdlib.h>

struct circularqueue
{

    int size;

    int f;

    int r;

    int *arr;
};

int isEmpty(struct circularqueue *q)
{

    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

int isFull(struct circularqueue *q)
{

    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }

    return 0;
}

void enqueue(struct circularqueue *q, int val)
{

    if (isFull(q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;

        q->arr[q->r] = val;

        printf("Enqued element : %d\n", val);
    }
}

int dequeue(struct circularqueue *q)
{

    int a = -1;

    if (isEmpty(q))
    {
        printf("The queue is empty");
    }
    else
    {
        q->f = (q->f + 1) % q->size;

        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct circularqueue *q;

    q->size = 10;

    q->f = q->r = 0;

    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(&q, 100);

    enqueue(&q, 200);

    enqueue(&q, 300);

    enqueue(&q, 400);

    printf("dequeue element %d from the queue\n", dequeue(&q));

    printf("dequeue element %d from the queue\n", dequeue(&q));

    printf("dequeue element %d from the queue\n", dequeue(&q));

    printf("dequeue element %d from the queue\n", dequeue(&q));

    enqueue(&q, 500);

    enqueue(&q, 600);

    enqueue(&q, 700);

    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    else if (isFull(&q))
    {
        printf("Try after some time\n");
    }

    return 0;
}