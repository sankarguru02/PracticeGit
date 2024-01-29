#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

int choice =1,n,count=0,hi;
struct node *head,*tail,*temp,*newnode;
	
void main()
{
	printf("\nSize of the node is %d\n",sizeof(struct node));
	
	head=0;
	printf("Enter the total no. of nodes : ");
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
		tail=temp;
		temp->next=0;
		n--;
	}
	traverse();
	traverse2();
	do{
	printf("\n\nDo you want to Perform  operation ??? \n1.Insertion \n2.Deletion \n3.Exit\t\t");
	scanf("%d",&hi);
	switch(hi)
	{
		case 1 :
			insert();
			break;
		case 2 :
			deletion();
			break;
		case 3 :
			hi=0;
			break;
		case 4 :
			printf("\nEnter a valid choice !!! ");
			break;	
	}
	}while(hi!=0);
}

void traverse()
{
	count=0;
	printf("\n\nWhile traversing from head... \n\nThe nodes are : ");
	temp=head;
	while(temp!=0)
	{
		printf("%d-->",temp->data);
		temp=temp->next;
		count++;
	}
	printf("NULL");
	printf("\n\nThe total no of nodes are %d",count);
}

void traverse2()
{
	printf("\n\nWhile traversing from tail...\n\n The nodes are : ");
	temp=tail;
	while(temp!=0)
	{
		printf("%d-->",temp->data);
		temp=temp->prev;
	}
	printf("NULL");
}

void insert()
{
	int i=1,pos;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n\nEnter the position to insert : ");
	scanf("%d",&pos);
	printf("Enter the data : ");
	scanf("%d",&newnode->data);
	
	if(pos==1)
	{
		head->prev=newnode;
	    newnode->next=head;
	    newnode->prev=0;
	    head=newnode;
	}
	else if(pos==n)
	{
		newnode->prev=tail;
	    tail->next=newnode;
	    newnode->next=0;
	    tail=newnode;
	}
	else
	{
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
	n++;
	traverse();
}

void deletion()
{
	int i=1,pos;
	printf("Enter the position : ");
	scanf("%d",&pos);
	if(pos==1)
	{
		temp=head;
	    head=head->next;
	    free(temp);
	}
	else if(pos==n)
	{
		temp=tail;
	    tail=tail->prev;
	    tail->next=0;
	    free(temp);
	}
	else
	{
		temp=head;
	    while(i<pos)
	    {
		  temp=temp->next;
		  i++;
	    }
     	temp->next->prev=temp->prev;
	   temp->prev->next=temp->next;
	}
	n--;
	traverse();

}


