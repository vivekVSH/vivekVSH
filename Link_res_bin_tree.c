#include<stdio.h>
#include<malloc.h>


struct Node{
    
    int data;

    struct Node* left;

    struct Node* right;

};

struct Node * createNode(int data){

    struct Node *n;

    n = (struct Node*)malloc(sizeof(struct Node));

    n->data = data;

    n->left = NULL;

    n->right = NULL;

    return n;

}

int main(){

/*

    //constructing the first node

    struct Node *p;

    p = (struct Node*)malloc(sizeof(struct Node));

    p->data = 100;

    p->left = NULL;

    p->right = NULL;

    //constructing the second node

    struct Node *p1;

    p1 = (struct Node*)malloc(sizeof(struct Node));

    p1->data = 200;

    p1->left = NULL;

    p1->right = NULL;

    //constructing the third node

    struct Node *p2;

    p2 = (struct Node*)malloc(sizeof(struct Node));

    p2->data = 300;

    p2->left;

    p2->right;

    //Linking the root node with left and right children

    p->left = p1;

    p->right = p2;

    */

   struct Node* p = createNode(100);

   struct Node* p1 = createNode(200);

   struct Node* p2 = createNode(300); 

   p->left = p1;
   
   p->right = p2;

    return 0;
}