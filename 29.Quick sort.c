#include<stdio.h>

void quicksort(int[],int,int);
int partition (int[],int,int);

void main()
{
    int lb,ub,a[10],i,n;
	
	printf("Enter the total no of elements : ");
	scanf("%d",&n);
	printf("\nEnter the unsorted array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	lb=0;
	ub=n-1;
	
	quicksort(a,lb,ub);
	
	printf("\n\nArray elements after sorting : ");
    for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}

void quicksort(int a[10],int lb,int ub)
{
	
   if(lb<ub)
   {
   	 printf("\nlb = %d \nub= %d\n",lb,ub);
   	 int loc=partition(a,lb,ub);
   	 quicksort(a,lb,loc-1);
   	 quicksort(a,loc+1,ub);
   }
	
}

int partition(int a[10],int lb,int ub)
{
	int pivot=a[lb];
	int start=lb;
	int end=ub;
	while (start < end)
	{
	    while(a[start]<=pivot)
    	{
		   start++;
    	}
    	while(a[end]>pivot)
    	{
    		end--;
		}
		if(start<end)
		{
			swap(&a[start],&a[end]);
		}
	}
		swap(&a[lb],&a[end]);
		printf("\nLocation = %d\n",end+1);
		return end;
		
}

void swap(int *a,int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
