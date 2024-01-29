//Linear search

#include<stdio.h>

int main()
{
	int a[10],n,i,elem;
	printf("Enter the size : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Element to search : ");
	scanf("%d",&elem);
	for(i=0;i<n;i++)
	{
		if(a[i]==elem)
		{
			printf("Element found at the position %d ",i+1);
			break;
		}
	}
	if(i==n)
	{
		printf("Element not found");
	}
}
