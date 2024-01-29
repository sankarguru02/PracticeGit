//sorting of array selection sort

#include<stdio.h>

int a[100],i,temp,size,j,min;

int main()
{
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	printf("Enter those arrays : ");
	for (i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	sort();
	display();
	return 0;
}
void sort()
{
	for(i=0;i<size;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
			if(a[min]!= a[i])
			{
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			}
		}
	}
}
void display()
{
	printf("Sorted array : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
