#include<stdio.h>


struct node
{
	int data;
	struct node* next;
};
	struct node* head, *newnode,*temp,*currentnode,*nextnode,*prevnode;
	int choice;
	
void main()
{

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
	temp->next=0;
	
	display();
	reverse();
	display();

	
}
void display()
{
	
	printf("\n\nThe data in the nodes are : \t");
	temp=head;
	while(temp!=0)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}

void reverse()
{
	prevnode =0;
	currentnode = nextnode = head;
	while(currentnode!=0)
	{
		nextnode =currentnode->next;
		currentnode->next = prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}
	head=prevnode;
}
