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
	struct node* head, *newnode,*temp;
	int choice;
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
		fflush(stdin);
		printf("\ndo you want to add a new node : 1.YES 2.NO ");
		scanf("%d",&choice);
		
	}while(choice==1);
	
	
	temp->next = 0;
	newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=head;
	head=newnode;
	printf("\nInsertion of new node at the beginning\n\n\nEnter the data : ");
	scanf("%d",&head->data);
	
		//dislay
	printf("\nThe data in the nodes after insertion are : \n");
	temp=head;
	while(temp!=0)
	{
		printf("\n%d",temp->data);
		temp=temp->next;
	}
}
	
	
