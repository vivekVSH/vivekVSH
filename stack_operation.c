#include<stdio.h>
#include<stdlib.h>

struct stack{

    int size;
    int top;
    int * arr;

};

int isEmpty(struct stack * ptr){

    if (ptr->top == -1)
    {
        return 1;

    }else{

        return 0;
    }
    
}

int isFull(struct stack * ptr){

    if (ptr->top == ptr->size-1)
    {
        return 1;

    }else{

        return 0;
    }
    
}

//fuction for the push the element on the stack

void push(struct stack* ptr , int val){

    if (isFull(ptr))
    {
        printf("stack is overflow cannot insert %d in stack \n", val);

    }else{

       ptr->top++;

       ptr->arr[ptr->top] = val;

    }
    
}

//fuction for the pop element from the stack

int pop(struct stack * ptr){

    if (isEmpty(ptr))
    {
        printf("Stack underflow ! Cannot pop from the stack\n");

        return -1;

    }else{

        int val = ptr->arr[ptr->top];

        //ptr->top = ptr->top - 1;
        
        ptr->top--;

        return val;

    }
    

}

int main(){

    struct stack * sp = (struct stack *)malloc(sizeof(struct stack));

    sp->size = 10;

    sp->top = -1;

    sp->arr = (int*)malloc(sp->size* sizeof(int));

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

    printf("popped %d from the stack\n", pop(sp));

    return 0;

}