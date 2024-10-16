#include <stdio.h>

// linked list
struct node
{
    int data;
    struct node *left;  // next
    struct node *right; // prev
};

struct node *addNode(struct node *root, int data)//root=NULL , 50  
{
    if (root == NULL)
    {
        root = malloc(sizeof(struct node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    else
    {
        if ( data > root->data )//50 > 40 
        {
            // right
            root->right = addNode(root->right,data);
            //40->right = addNode(NULL,50);
        }
        else
        {
            // left
             root->left = addNode(root->left,data);
        }
    }
}
int main()
{
    struct node *root = NULL;//40 

    root = addNode(root, 40);
    addNode(root, 50);//40,50
    addNode(root, 30);
    addNode(root, 150);

    

    return 0;
}