#include<stdio.h>
#include<stdlib.h>

struct Node{

    int key;

    struct Node* left;

    struct Node* right;

    int height;

};

int getHeight(struct Node* n){

    if (n == NULL)
    {
        return 0;
    }
    return n->height;
    
}

struct Node* createnode(int key){

    struct Node* node = (struct Node*)malloc(sizeof(struct Node));

    node->key = key;

    node->height = 1;

    node->left = NULL;

    node->right = NULL;

    return node;

}

int max (int a, int b){

    return a>b?a:b;

}

int getBalancefator(struct Node* n){

    if (n == NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
    
}

struct Node * Rightrotate(struct Node * y){

    struct Node* x = y->left;

    struct Node* T2 = x->right;

    x->right = y;

    y->left = T2;

    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return x;

}

struct Node* Leftrotate(struct Node* x){

    struct Node* y = x->right;

    struct Node* T2 = y->left;

   y->left = x;

   x->right = T2;

   y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

   x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

   return y;

}

struct Node* insert(struct Node* node, int key){

    if (node == NULL)
    {
        return (createnode(key));
    }
    if (key < node->key)
    {
        node->left = insert(node->left, key);
    }
    else if (key > node->key)
    {
        node->right = insert(node->right, key);

        return node;

    }
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    
    int bf = getBalancefator(node);

    //Left Left case

    if (bf>1 && key < node->left->key)
    {
        return Rightrotate(node);
    }

    //Right Right case

    if (bf<-1 && key > node->right->key)
    {
        return Leftrotate(node);
    }

    //Left Right case

    if (bf>1 && key > node->left->key)
    {
        node->left = Leftrotate(node->left);

        return Rightrotate(node);
    }

    //Right Left Case

    if (bf<-1 && key < node->right->key)
    {
        node->right = Rightrotate(node->right);

        return Leftrotate(node);
    }

    return node;
     

}

void preorder(struct Node* root){

    if (root != NULL)
    {

        printf("%d ", root->key);

        preorder(root->left);

        preorder(root->right);
    }
}

int main()
{
    struct Node* root = NULL;

    root = insert(root , 1);

    root = insert(root , 2);

    root = insert(root , 4);

    root = insert(root , 5);

    root = insert(root , 6);

    root = insert(root , 3);

    preorder(root);

    return  0;
}