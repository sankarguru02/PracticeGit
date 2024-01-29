#include<stdio.h>

struct node
{
	int data;
	struct node* next;
	struct node* prev;
};

struct node *head,*newnode,*temp,*tail,*currentnode,*nextnode;

int n,count=0;

void main()
{
	head=0;
	printf("\nEnter total no of nodes : ");
	scanf("%d",&n);
	while(n>0)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data : ");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->prev=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
		temp->next=0;
		tail=temp;
		n--;
	}
	display();
	reverse();
	display();
	
}

void display()
{
	count=0;
	temp=head;
	printf("\n\nThe nodes are : ");
	while(temp!=0)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
		count++;
	}
	printf("NULL");
	printf("\nThe total no of nodes are : %d",count);
}

void reverse()
{
	currentnode=nextnode=head;
	while(currentnode!=0)
	{
		nextnode=currentnode->next;
		currentnode->next=currentnode->prev;
		currentnode->prev=nextnode;
		currentnode=nextnode;
		
		
	}
    currentnode=head;
    head=tail;
    tail=currentnode;
    
}
