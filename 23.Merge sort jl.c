//Merge sort

#include<stdio.h>

int a[100],n,ub,lb,mid,i,j,b[100],k=0;
int merge();
void read();
void diaplay();
int mergesort();

void main()
{
	read();
	display();
	mergesort();
	printf("\n\nAfter sorting : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
}

int mergesort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		mid=(lb+ub/2);
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}

int merge(int a[],int lb,int mid,int ub)
{
	i=lb;
	j=mid+1;
	k=lb;
	
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
		
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
}

void read()
{
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}

void display()
{
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
