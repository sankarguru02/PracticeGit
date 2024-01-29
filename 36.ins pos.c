#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node* next;
};

void main()
{
	struct node *head, *newnode,*temp;
	int choice,count=0,i,pos;
	head=0;
	do
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data : ");
		scanf("%d",&newnode->data);
		if (head==0)
		{
			head = temp =newnode;
		}
		else
		{
			temp->next = newnode;
			temp=newnode;
		}
		printf("\ndo you want to add a new node (1/0) :  ");
		scanf("%d",&choice);
		
	}while(choice==1);
	temp->next=0;
	
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n\nEnter the position to add a new node : ");
	scanf("%d",&pos);
	i=1;
	temp=head;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	printf("\n\nEnter the data to insert : ");
	scanf("%d",&newnode->data);
	
	//dislay
	printf("\n\n\nThe data in the nodes after insertion are : \t");
	temp=head;
	while(temp!=0)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
		count++;
	}
	printf("NULL");
	printf("\n\nTotal no of nodes  = %d",count);
}
