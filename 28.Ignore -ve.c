#include<stdio.h>

int i=0,j,n,temp,min,temp1,temp2;
int a[]={0,8,4,-2,-3,-1,-5};
int b[10];
void main()
{
	for(i=0;i<5;i++)
	{b[i]=i;
	}
	printf("\ni=%d\n",i);
	for(i=0;i<5;i++)
	{printf("%d\n",b[i]);
	}
	n=sizeof(b)/sizeof(b[0]);
	printf("%d\n",n);
	n=sizeof(a)/sizeof(a[0]);
	printf("\n\nNo of elements in the Array is %d",n);
	printf("\n\nArray values before sorting : ");
	for(i=0;i<n;i++)
	{
	   printf(" %d ",a[i]);	
	}
	  
	for(i=0;i<n;i++)
	{

		for(j=0;j<n-1;j++)
		{
		
		if(a[j]>=0)
		{temp1=a[j];
		}
		else
		{temp1=-1*a[j];
		}
		if(a[j+1]>=0)
		{temp2=a[j+1];
		}
		else
		{	temp2=-1*a[j+1];
		}	
		if(temp1>temp2)
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	   

	}
	printf("\n\Array values after sorting : ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	   
	
}


