//deletion of an element in a sorted array

#include<stdio.h>

int a[50],num,i,pos,size;

void deletion()
{
	printf("Enter the postion of the number to be deleted : ");
	scanf("%d",&pos);
	for(i=pos-1;i<size;i++)
 {
 	a[i]=a[i]+1;
 }
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
	printf("Enter the sorted array values : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	deletion();
	display();
	return 0;
}


