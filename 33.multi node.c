#include<stdio.h>


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
		printf("\ndo you want to add a new node : 1.YES 2.NO ");
		scanf("%d",&choice);
		
	}while(choice==1);
	
	//dislay
	temp->next=0;
	printf("\nThe data in the nodes are : \n");
	temp=head;
	while(temp!=0)
	{
		printf("\n%d",temp->data);
		temp=temp->next;
	}
}
