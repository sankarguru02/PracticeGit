#include<stdio.h>

struct node 
{
	int data;
	struct node* next;
	struct node* prev;
};
int count,choice,opt,n;
struct node* head,*tail,*temp,*newnode;

void deleteatbeg()
{
	temp=head;
	head=head->next;
	free(temp);
}

void deleteatend()
{
	temp=tail;
	tail=tail->prev;
	tail->next=0;
	free(temp);
}

void deleteatpos()
{
	int i=1,pos;
	printf("Enter the position : ");
	scanf("%d",&pos);
	temp=head;
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	temp->next->prev=temp->prev;
	temp->prev->next=temp->next;
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
	printf("\n\n\nDeletion of a node in the existing LIST ");
	do
	{
	printf("\nWhere do you want to Delete the node ??? \n\n1.At Beginning\n2.At End|\n3.At a certain Position\nEnter your choice :  ");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1 :
			deleteatbeg();
			break;
		
		case 2:
			deleteatend();
			break;
			
		case 3:
			deleteatpos();
			break;
			
		default :
			printf("Enter a valid choice !!! ");
			break;
		
	}
	display();
	printf("\nDo you want to delete a node (0/1) : ");
	scanf("%d",&choice);
	
    }while(choice==1);
	
	
}
