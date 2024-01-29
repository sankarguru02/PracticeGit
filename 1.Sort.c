//sorting of array bubble sort

#include<stdio.h>
int a[100],i,temp,size,j;
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
		for(j=i+1;j<size-i;j++)
		{
	  	   if(a[i]>a[j])
	  	    {
	  		  temp=a[i];
	  		  a[i]=a[j];
	  		  a[j]=temp;
	  		
		    }
    }	}   
}
void display()
{
	printf("Sorted array : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
