#include<stdio.h>

struct node
{
	int data;
	struct node* next;
};

void main()
{
	struct node* head, *newnode,*temp;
	head=0;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data : ");
	scanf("%d",&newnode->data);
	printf("\nThe data in the first node is : %d",newnode->data);
	newnode->next=0;
}
