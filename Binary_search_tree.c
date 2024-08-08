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

void inodrder(struct Node* root){

    if (root!=NULL)
    {
        
        inodrder(root->left);

        printf("%d ",root->data);

        inodrder(root->right);

    }
    
}

int isBST(struct Node * root){

    static struct Node *prev = NULL;

    if (root!=NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }

        if (prev!=NULL && root->data <= prev->data)
        {
            return 0;
        }

        prev = root;

        return isBST(root->right);
        
    }
    else
    {
        return 1;
    }
    
}

int main()
{
    struct Node* p = createnode(10);

    struct Node* p1 = createnode(8);

    struct Node* p2 = createnode(13);

    struct Node* p3 = createnode(4);

    struct Node* p4 = createnode(9);

    p->left = p1;

    p->right = p2;

    p1->left = p3;
    
    p1->right = p4;

    inodrder(p);

    printf("\n");

    //printf("%d",isBST(p));

    if (isBST)
    {
        printf("This is Binary search tree");
    }
    else
    {
        printf("This is not Binary search tree");
    }
    

    return 0;
}