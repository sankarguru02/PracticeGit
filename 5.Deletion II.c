//deletion of an array element in a unsorted array

#include<stdio.h>

int a[100],i,num,pos,size;

void deletion()
{
	printf("Enter the position of the element to be deleted : ");
	scanf("%d",&pos);
	a[pos-1]=a[size-1];
	size--;
}

void display()
{
	printf("Array values after deletion : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}

void main()
{
	printf("Enter the size : ");
	scanf("%d",&size);
	printf("Enter the unsorted array values : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	deletion();
	display();
	return 0;
}
