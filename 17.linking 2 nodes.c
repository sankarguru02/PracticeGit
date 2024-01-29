//linking of two nodes

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;	
};

void main()
{
	struct node* start;
	start =(struct node*)malloc(sizeof(struct node));
	struct node* newnode1;
	struct node* newnode2;
	start=newnode1;
	newnode1 =(struct node*)malloc(sizeof(struct node));
	newnode1->data =50;
	newnode2=(struct node*)malloc(sizeof(struct node));
	newnode2->data =500;
	newnode1->next=newnode2;
}
