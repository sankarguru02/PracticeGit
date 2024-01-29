#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node* left;
	struct node* right;
};

struct node* create();

void main()
{
	struct node *root;
	root=0;
	root = create();
	printf("\nRoot node is %d",root->data);
	inorder(root);
}

struct node *create()
{
	int x;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(int));
	printf("\nEnter node data or Enter -1 to return 0 : ");
	scanf("%d",&x);
	if(x==-1)
	{
		return 0;
	}
	else
	{
		newnode->data=x;
		printf("\nEnter Left child of %d : ",x);
	    newnode->left= create();
	    printf("\nRight child of %d : ",x);
	    newnode->right=create();
	    return newnode;
	}
}
	void inorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

