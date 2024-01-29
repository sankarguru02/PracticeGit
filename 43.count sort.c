#include<stdio.h>
int b[10];
int i;
int count[10];
void main()
{
	int a[]={2,1,1,0,5,7,4,5,6,3},max,i,k;
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	k=max+1;
	printf("\nBefore sorting : ");
	display(a,k);
	countsort(a,k);
	printf("\nAfter sorting  : ");
	display(b,k);
	
}

countsort(int a[],int n)
{
	
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(i=1;i<=n;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		b[--count[a[i]]]=a[i];
	}
}

void display(int x[],int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d  ",x[i]);
	}
}
