//REPLACEMENT ALGORITHM - FIFO

#include<stdio.h>

int n,elem,pgframe[50],front=-1,rear=-1,choice,i,con;

void main()
{
	printf("\t\t\t\t\tREPLACEMENT ALGORITHM - FIFO");
	printf("\n\nEnter the no of Page frames : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the Process Id : ");
		scanf("%d",&elem);
		enqueue(elem);
	}
	display();
	do
	{
		printf("\nAny Incoming Process to be loaded? (0/1) : ");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("\nEnter the Process Id : ");
			scanf("%d",&elem);
			enqueue(elem);
			display();
		}
	}while(choice==1);
	
}

void enqueue(int elem)
{
	if(front==-1 && rear==-1)
	{
		front = rear = 0;
		pgframe[rear]=elem;
		printf("\nProcess Id %d is loaded into Page frame ",elem);
	}
	else if((rear+1)%n==front)
	{
		dequeue();
		rear=(rear+1)%n;
		pgframe[rear]=elem;
		printf("\nProcess Id %d is loaded into Page frame ",elem);
	}
	else
	{
		rear=(rear+1)%n;
		pgframe[rear]=elem;
		printf("\nProcess Id %d is loaded into Page frame ",elem);
	}
}



void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("\nThe page frame is empty !!!");
	}
	else if(rear==front)
	{
		front=rear=-1;
	}
    else
    {
    	printf("\nProcess Id  %d is deleted ",pgframe[front]);
    	front=(front+1)%n;
	}
	
}

void display()
{
	
	printf("\n\nThe pageframe contains the following process ids : ");
    for(i=n-1;i>=0;i--)
    {
    	printf("\n %d",pgframe[i]);
	}
}

