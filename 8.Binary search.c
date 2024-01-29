//Binary search

#include<stdio.h>

int main()
{
	int a[10],n,i,elem,first,last,middle;
	printf("Enter the size : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Element to search : ");
	scanf("%d",&elem);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(elem<a[middle])
		{
			last=middle;
		}
		else if(elem==a[middle])
		{
			printf("Element found at the position %d ",middle+1);
			break;
		}
		else
		{
			first=middle;
		}
		middle=(first+last)/2;
	}
	if(first>last)
	{
		printf("Element not found");
	}
}
