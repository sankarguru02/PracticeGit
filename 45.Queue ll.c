#include<stdio.h>

struct node
{
	int data;
	struct node* next;
};

struct node *front=0,*rear=0,*temp;

void enqueue (int elem)
{
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=elem;
	printf("\nEnqueued : %d",newnode->data);
	newnode->next=0;
	if(front==0 && rear==0)
	{
		front=rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	rear->next=0;
}

void dequeue()
{
	temp=front;
	printf("\nDequeued : %d",temp->data);
	front=front->next;
	free(temp);
}

void display()
{
	temp=front;
	printf("\n\nQueque values are : ");
	while(temp!=0)
	{
		printf("%d-->",temp->data );
		temp=temp->next;
	}
	printf("NULL");
}

void peek()
{
	
	printf("\nPeek : %d",front->data);
}

void main()
{
	enqueue(100);
	enqueue(190);
	enqueue(1);
	enqueue(10);
	display();
	dequeue();
	dequeue();
	enqueue(200);
	display();
	peek();
	
}
