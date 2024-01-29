#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
	int key;
	int data;
	struct node* next;
};

struct node *head,*temp,*newnode;

void main()
{
	int n,i,ch,val;
	printf("Enter the no of nodes : ");
	scanf("%d",&n);
	head=0;
	while(n>0)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data : ");
		scanf("%d",&newnode->data);
		printf("\nEnter the key for the data %d : ",newnode->data);
		scanf("%d",&newnode->key);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
	       temp->next=newnode;
	       temp=newnode;
		}
		n--;
	}
	display();
	do
	{
		printf("\nDo You want to search a element using key ???(0/1) ");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("\nEnter a key value : ");
			scanf("%d",&val);
			keysearch(val);
		}
	}while(ch==1);
}

void display()
{
	int count=0;
	temp=head;
	printf("\n\nLinked List key value pairs are : \n\n");
	while(temp!=0)
	{
		printf(" %d :",temp->key);
		printf(" %d ---> ",temp->data);
		temp=temp->next;
		count++;
	}
	printf("NULL : NULL");
	printf("\n\nNo of Nodes : %d",count);
}

void keysearch(int val)
{
	temp=head;
	while(temp!=0)
	{
		if(temp->key==val)
		{
			printf("\n\nThe data in the key %d is %d",val,temp->data);
			break;
		}
		temp=temp->next;
	}
}



