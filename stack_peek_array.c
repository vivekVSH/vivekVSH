#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr){

    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isFull(struct stack * ptr){

    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void push(struct stack* ptr,int val){

    if (isFull(ptr))
    {
        printf("stack is overflow cna't insert %d element in to the stack \n",val);
    }
    else
    {
        ptr->top++;

        ptr->arr[ptr->top] = val;
    }
  
}

int pop(struct stack * ptr){

    if (isEmpty(ptr))
    {
        printf("stack is underflow ! can't pop element from stack\n");

        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];

        ptr->top--;

        return val;
    }
}

int peek(struct stack *sp,int i){

    int arrayInd = sp->top -i + 1;

    if (arrayInd < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{

        return sp->arr[arrayInd];

    }
    

}

int main()
{
    struct stack* sp= (struct stack*)malloc(sizeof(struct stack));

    sp->size = 10;

    sp->top = -1;

    sp->arr = (int*)malloc(sp->size * sizeof(int));

    printf("stack has been created successfully\n");

    printf(" Before Pushing , Empty : %d\n", isEmpty(sp));

    printf(" Before Pushing , Full : %d\n", isFull(sp));

    push(sp, 1100);
    push(sp, 1000);
    push(sp, 900);
    push(sp, 800);
    push(sp, 700);
    push(sp, 600);
    push(sp, 500);
    push(sp, 400);
    push(sp, 300);
    push(sp, 200);
    push(sp, 100);

    printf(" After Pushing , Empty : %d\n", isEmpty(sp));

    printf(" After Pushing , Full : %d\n", isFull(sp));

    //this is follow the last in first out

    printf("popped %d from the stack\n", pop(sp));

    printf("popped %d from the stack\n", pop(sp));

    for (int j = 0; j < sp->top + 1 ; j++)
    {
        printf("the value at index %d is %d \n", j,peek(sp,j));
    }

    return 0;
}