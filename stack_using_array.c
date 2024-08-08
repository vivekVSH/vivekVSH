#include<stdio.h>
#include<stdlib.h>

struct stack{

   int size;

   int top;

   int *arr;

};

int isEmpty(struct stack* ptr){

  if(ptr->top == -1)
  {
     return 1;

  }else{

   return 0;

  }
  

}


int isFull(struct stack * ptr){

   if (ptr->top == ptr->size-1)
   {
      return 0;

   }else{

      return 1;
   }
   
}

int main()
{
  /* struct stack s;

   s.size = 80;

   s.top = -1;

   s.arr = (int *)malloc(s.size * sizeof(int)); */

   struct stack *s;

   s->size = 80;

   s->top = -1;

   s->arr = (int *)malloc(s->size * sizeof(int));

   //push an element on the stack

   s->arr[0] = 4;

   s->arr[1] = 8;

   s->arr[2] = 7;

   s->arr[3] = 12; 

   s->arr[4] = 23;

   s->arr[5] = 45; 

   s->top++; 

   //check stack is an empty
   
   if (isEmpty(s))
   {
      printf("The stack is an empty\n");
   }
   else{

     printf("The stack is not an empty\n");

   } 
   

   return 0;
}