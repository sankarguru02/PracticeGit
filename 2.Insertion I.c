//Insertion of element in a sorted array;

#include<stdio.h>

int a[50],num,i,pos,size;

void main()
{
	printf("Enter the size : ");
	scanf("%d",&size);
	printf("Enter the sorted array values : ");
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
	for (i=size;i>=pos-1;i--)
	{
		a[i]=a[i-1];
	}
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

