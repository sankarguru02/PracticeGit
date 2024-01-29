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
	struct node* node1;
	struct node* node2;
	struct node* node3;
	struct node* node4;
	start = (struct node*)malloc(sizeof(struct node));
	printf("%d\n",start);
	node1 = (struct node*)malloc(sizeof(struct node));
	printf("%d\n",node1);
	node2 = (struct node*)malloc(sizeof(struct node));
	node3 = (struct node*)malloc(sizeof(struct node));
	node4 = (struct node*)malloc(sizeof(struct node));
	start=node1;
	printf("%d",start);
	node1->data =1;
	node2->data =2;
	node3->data =3;
	node4->data =4;
	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	node4->next='NULL';
	printf("\n%d",node1->data);
	printf("\n%d",node2->data);
	printf("\n%d",node3->data);
	printf("\n%d",node4->data);
}
