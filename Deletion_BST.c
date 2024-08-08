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

struct Node* inodrderpredecessor(struct Node* root){

    root = root->left;

    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
    
}

struct Node* Deletenode(struct Node* root, int value){

    struct Node* inPre;

    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);

        return NULL;
    }
    

    //searching the node to be deleted

    if (value < root->data)
    {

       root->left = Deletenode(root->left,value);

    }
    else if (value > root->data)
    {

       root->right = Deletenode(root->right,value);

    }
    //deletion is perform when the node is found

    else
    {
       inPre = inodrderpredecessor(root); 

       root->data = inPre->data;

       root->left = Deletenode(root->left , inPre->data);

    }
    return root;
    
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

    printf("deleted element show in follow\n");

    Deletenode(p,9);

    inodrder(p);

    return 0;
}