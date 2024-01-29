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
	int choice,count=0;
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
		printf("\n %d",sizeof(struct node));
		printf("\n %lu",sizeof(int));
		printf("\n %d",sizeof(int*));
		printf("\ndo you want to add a new node : 1.YES 2.NO ");
		scanf("%d",&choice);
		
	}while(choice==1);
	
	
	temp->next = 0;
	newnode=(struct node*)malloc(sizeof(struct node));
	temp=head;
    while(temp->next!=0)
    {
    	temp=temp->next;
	}
	temp->next=newnode;
	newnode->next = 0;
	printf("\n\nInsertion at the End : \n\n\nEnter the data : ");
	scanf("%d",&newnode->data);
	
	//dislay
	printf("\nThe data in the nodes after insertion are : \n\n");
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
	
	
