//Insertion of element in the unsorted array

#include<stdio.h>

int a[50],num,i,pos,size;

void main()
{
	printf("Enter the size : ");
	scanf("%d",&size);
	printf("Enter the unsorted array values : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion();
	display();
	return 0;
}

void insertion()
{
	printf("Enter the number to insert : ");
	scanf("%d",&num);
	printf("Enter the position : ");
	scanf("%d",&pos);
	a[size]=a[pos-1];
	a[pos-1]=num;
	size++;
}

void display()
{
	printf("Array after insertion : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
