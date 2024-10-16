#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data; // 10
    struct node *left;
    struct node *right;
};

struct node *addNode(struct node *root, int data) // 70,100
{                                                 

    if (root == NULL)
    {

        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else
    {
        if (data > root->data)
        {
            // right
            root->right = addNode(root->right, data);
            //90->right = addNode(null,100) addNode(null,90)
        }
        else
        {
            root->left = addNode(root->left, data);
        }
    }

    return root;
}

void inOrder(struct node *root){
    if(root != NULL){
        inOrder(root->left);
        printf(" %d",root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root){
    if(root != NULL){
        printf(" %d",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d",root->data); 
    }
}

int main()
{

    struct node *root = NULL;
    root = addNode(root, 70); // first insertion
    addNode(root, 90);//70,90
    addNode(root, 50);
    addNode(root, 100);
    addNode(root, 250);
    addNode(root, 95);
    addNode(root, 30);
    addNode(root, 60);


    
    // printf("\n%d ", root->data);
    // printf("\n%d ", root->left->data);
    // printf("\n%d ", root->right->data);
    // printf("\n%d ", root->right->right->data);
    // printf("\n%d ", root->right->right->right->data);

    //tree travesal 

    //inOrder    : left-root-right 
    //preOrder
    //postOrder 

    //inOrder(root);
    //preOrder(root);
    postOrder(root);


    return 0;
}