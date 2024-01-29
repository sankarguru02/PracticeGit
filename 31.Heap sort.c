#include<stdio.h>
int b[10];
void main()
{
    int lb,ub,a[10],i=0,n,loc;
	
	printf("Enter the total no of elements : ");
	scanf("%d",&n);
	printf("\nEnter the unsorted array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	
	heapsort(a,n);
}

void heap sort(a,n)
{
	int i;
	for(i=n/2;i<=1;i++)
	{
		heapify(a,n,i);
	}
	for(i=n;)
}
