#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;

    struct Node* left;

    struct Node* right;

};

struct Node* createnode(int data){

    struct Node* n;

    n = (struct Node*)malloc(sizeof(struct Node));

    n->data = data;

    n->left = NULL;

    n->right = NULL;

    return n;
}

void postorder(struct Node* root){

    if (root!=NULL)
    {
       postorder(root->left);

       postorder(root->right);

       printf("%d ", root->data);

    }
    
}
int main(){

    struct Node* p = createnode(10);

    struct Node* p1 = createnode(20);

    struct Node* p2 = createnode(30);

    struct Node* p3 = createnode(40);

    struct Node* p4 = createnode(50);

    p->left = p1;

    p->right = p2;

    p1->left = p3;

    p1->right = p4;

    postorder(p); 

    return 0;
}