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
		scanf("%d",&a[i]);
	}
	lb=0;
	ub=n-1;
	mergesort(a,lb,ub);
	printf("\n\nAfter sorting the array : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
}

void mergesort(a,lb,ub)
{
	if(lb<ub)
	{
		int mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
		
	}
}

void merge(int a[],int lb,int mid,int ub)
{
    int i=lb;
	int j=mid+1;
	int k=lb;
	
	while(i<=mid && j<=ub)
	{
		if(a[i]<a[j])
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
