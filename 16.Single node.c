//creating a single node

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;	
};

void main()
{
	struct node* start; //external pointer
	start =(struct node*)malloc(sizeof(struct node));
	struct node* newnode1;
	newnode1 =(struct node*)malloc(sizeof(struct node));
	newnode1->data =50;
	newnode1->next='NULL';
	printf("%d->NULL",newnode1->data);
}
