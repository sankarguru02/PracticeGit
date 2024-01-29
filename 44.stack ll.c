#include<stdio.h>

struct node
{
	int data;
	struct node* link;
};

struct node *top=0,*newnode,*temp;
int n;

void push(int elem)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=elem;
	printf("\nPushed : %d",newnode->data);
	newnode->link=top;
	top=newnode;
}

void pop()
{
	temp=top;
	printf("\nPopped : %d",top->data);
	top=top->link;
	free(temp);
}

void display()
{
	temp=top;
	printf("\nStack values are : ");
	while(temp!=0)
	{
		printf("%d-->",temp->data);
		temp=temp->link;
	}
	printf("NULL");
}
void main()
{
   push(30);
   push(100);
   push(200);
   display();
   pop();
   display();
   push(1000);
   push(1);
   display();
   pop();
   display();
}

