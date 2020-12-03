#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{   
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("\n\nEnter the data of the node (Press -1 for NULL):");
    scanf("%d",&x);
    if (x==-1)
    {
        return NULL;
    }

    newnode->data=x;
    printf("\n\nEnter the Left Of %d :",x);
    newnode->left=create();
    printf("\n\nEnter the right of %d :",x);
    newnode->right=create();
    return newnode;
}

void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ->",root->data);
    inorder(root->right);
}
void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d ->",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ->",root->data);
}

int main()
{
    int c=0;
    struct node *root;
    while (c!=5)
    {   
        /* Binary Tree is 
                1
                /\
               /  \
              /    \
             2       3              
            /\       /\
           /  \     /  \
          4    5   6    7   
          
                                  */ 

        printf("\nMain Menu\n\n");                                                       
        printf("1 Create\n");
        printf("2 Inorder Traversal\n");
        printf("3 Preorder Traversal\n");
        printf("4 Postorder Traversal\n");
        printf("5 Exit\n");

        scanf("%d",&c);

        switch (c)
        {
        case 1:
            root=create();
            break;
        case 2:
            printf("Inorder Traversal is :\n\n");
            inorder(root);
            break;
        case 3:
            printf("Preorder Traversal is :\n\n");
            preorder(root);
            break;
        case 4:
            printf("Postorder Traversal is :\n\n");
            postorder(root);
            break;
        case 5:
            break;
        
        default:
            break;
        }
    }
    return 0;
}