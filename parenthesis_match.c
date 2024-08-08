#include<stdio.h>
#include<stdlib.h>

struct stack{

   int size;

   int top;

   char *arr;

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

void push(struct stack* ptr,char val){

    if (isFull(ptr))
    {
        printf("stack is overflow cna't insert %c element in to the stack \n",val);
    }
    else
    {
        ptr->top++;

        ptr->arr[ptr->top] = val;
    }
  
}

char pop(struct stack * ptr){

    if (isEmpty(ptr))
    {
        printf("stack is underflow ! can't pop element from stack\n");

        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];

        ptr->top--;

        return val;
    }
}

int parenthesisMatch(char * exp){

//create and initialize the stack

    struct stack* sp;

    sp->size = 200;

    sp->top = -1;

    sp->arr = (char*)malloc(sp->size* sizeof(char)); 

    for (char i = 0; exp[i]!='\0'; i++)
    {
        if (exp[i] =='(' )
        {
            push(sp,'(');
        }
        else if (exp[i]==')')
        {
           if (isEmpty(sp))
           {
             return 0;
           }
           else
           {
             pop(sp);
           }
            
        }
        
    }

    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    char * exp = "(8)*((9))";

   //check stack is an empty
   
   if (parenthesisMatch(exp))
   {
      printf("The parenthesis is matching\n");
   }
   else{

     printf("The parenthesis is not matching\n");

   } 
   

   return 0;
}