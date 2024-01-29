//quick sort algorithm

#include<stdio.h>

int lb,ub,loc,i,j,a[100],n,pivot,start,end,temp,temp2;
void read();
void display();
int partion(int[],int,int);
int quicksort(int[],int,int);

void main()
{
	read();
	lb=0;ub=n-1;
	printf("\nArray elements before sorting : ");
	display();
	quicksort(a,lb,ub);
    printf("\n\nArray elements after sorting : ");
    for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
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

int partion(int a[], int lb, int ub)
{
	pivot=a[lb];
	start =lb;
	end =ub;
	
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end++;
		}
		if(start<end)
		{
			temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
		
	}
    temp2=a[lb];  //because we are using lb as our pivot element
    a[lb]=a[end];
    a[end]=a[lb];
    return end;  //to divide the partition into two
}

int quicksort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		loc=partion(a,lb,ub);
		quicksort(a,lb,loc-1);
		quicksort(a,loc+1,ub);
	}
}
