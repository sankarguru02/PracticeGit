#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

int count,choice,opt,n;
struct node *head,*tail,*temp,*newnode;

void insertatbeg()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&newnode->data);
	head->prev=newnode;
	newnode->next=head;
	newnode->prev=0;
	head=newnode;
}

void insertatend()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data : ");
	scanf("%d",&newnode->data);
	newnode->prev=tail;
	tail->next=newnode;
	newnode->next=0;
	tail=newnode;
}

void insertatpos()
{
	int i=1,pos;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n\nEnter the position to insert : ");
	scanf("%d",&pos);
	printf("Enter the data : ");
	scanf("%d",&newnode->data);
	temp=head;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	newnode->prev=temp;
	temp->next=newnode;
	newnode->next->prev=newnode;
}

void display()
{	
	printf("\n\nThe nodes are : ");
	temp=head;
	count=0;
	while(temp!=0)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
		count++;
	}
	printf("NULL");
	printf("\n\nThe total no of nodes are %d",count);

}

void main()
{
	head=0;
	printf("Enter the total no of nodes : ");
	scanf("%d",&n);
	while(n>0)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data : ");
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
		tail=temp;
		n--;
	}
	display();
	printf("\n\n\nInserting a new node in the existing LIST ");
	do
	{
	printf("\nWhere do you want to insert a new node ??? \n1.At Beginning\n2.At End|\n3.At a certain Position\nEnter your choice :  ");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1 :
			insertatbeg();
			break;
		
		case 2:
			insertatend();
			break;
			
		case 3:
			insertatpos();
			break;
			
		default :
			printf("Enter a valid choice !!! ");
			break;
		
	}
	display();
	printf("\nDo you want to add a new node (0/1) : ");
	scanf("%d",&choice);
	
    }while(choice==1);
	
	
}
