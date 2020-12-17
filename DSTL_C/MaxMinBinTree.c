#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *create(int data)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

int findMax(struct node *root)
{   
    int rootData, maxLST, maxRST;
    if(root==NULL)
    {
        return INT_MIN;
    }
    rootData=root->data;
    maxLST=findMax(root->left);
    maxRST=findMax(root->right);

    if(maxLST>rootData)
    {
        rootData=maxLST;
    }
    if(maxRST>rootData)
    {
        rootData=maxRST;
    }
    return rootData;

}
int findMin(struct node *root)
{   
    int rootData, minLST, minRST;
    if(root==NULL)
    {
        return INT_MAX;
    }
    rootData=root->data;
    minLST=findMin(root->left);
    minRST=findMin(root->right);

    if(minLST<rootData)
    {
        rootData=minLST;
    }
    if(minRST<rootData)
    {
        rootData=minRST;
    }
    return rootData;

}

int main()
{   
    struct node* root;

            /*        35
                     /  \
                    /    \
                   /      \
                 55       25
                 /\         \
                /  \         \ 
              19    29        90 
             /                /\
            /                /  \
           20              100   78                         */

    root=create(35);
    root->left=create(55);
    root->right=create(25);
    root->left->left=create(19);
    root->left->right=create(29);
    root->right->right=create(90);
    root->right->right->right=create(78);
    root->right->right->left=create(100);
    root->left->left->left=create(20);

    printf("\nMaximum Element of Binary Tree is : %d",findMax(root));
    printf("\n\nMinimum Element of Binary Tree is : %d",findMin(root));

    return 0;
}
