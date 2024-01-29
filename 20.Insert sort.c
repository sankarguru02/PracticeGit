//insertion sort

#include<stdio.h>

int a[10],i,j,key,n;

void main()
{
	read();
	display();
	insertsort();
	printf("\n\n After sorting : \n\n");
	display();
}

void read()
{
	printf("Enter the no. of elements : ");
	scanf("%d",&n);
	printf("Enter those elements : ");
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
	printf("\n");
}

void insertsort()
{
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && key<a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
		
	}
}



