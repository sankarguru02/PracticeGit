#include<stdio.h>

int front=-1,rear=-1,elem,size,queue[10];
int ch,i;

void main()
{
	printf("Enter the size of the queue : ");
	scanf("%d",&size);
	do
	{
		printf("\nEnqueue / dequeue / display  : (1/2/3) --- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case(1) :
				printf("\nEnter the element to enqueue : ");
				scanf("%d",&elem);
		        enqueue(elem);
		        break;
		    
		    case(2):
		    	dequeue();
		    	break;
		    	
		    case(3):
		    	display();
		    	break;
		    
			default:
				printf("\nEnter the valid choice !!! ");
				break;
			}    
			printf("\nDo you wanna continue : (1/0) -- ");
			scanf("%d",&ch);
				
		}while(ch==1);
	}
	

void enqueue(int elem)
{
	if(rear==size-1)
	{
		printf("\nQueue Overflow !!!");
	}
	else
	{
		rear++;
		queue[rear]=elem;
		printf("\nEnqueued : %d",queue[rear]);
		if(front==-1)
		{
			front=0;
		}
	}
}

void dequeue()
{
	if(rear==-1)
	{
		printf("\nQueue Underflow");
	}
	else
	{
		printf("\nElement dequeued : %d",queue[front]);
		front++;
		
	}
}

void display()
{
	for(i=front;i<=rear;i++)
	{
		printf("\nQueue values are : %d\t",queue[i]);
		
	}
}
