//Polynomial sorting based on the exponent values

#include<stdio.h>
int i,temp,temp2,min,size,j;
void main()
{
	int a[4][2]={{3,2},{4,4},{6,1},{7,3}};
	size=sizeof(a);
	printf("\n\nValues of polynomial before sorting : ");
	for(i=0;i<4;i++)
	{
		printf("%dx^%d + ",a[i][0],a[i][1]);
	}
	printf("\n\nThe size of the given 2D array is : %d",size);
	
	for(i=0;i<4;i++)
	{
		min=i;
		for(j=i+1;j<4;j++)
		{
			if(a[j][1]<a[min][1])
				min=j;
	
    	}
				temp=a[min][1];
				a[min][1]=a[i][1];
				a[i][1]=temp;
				
		    	temp2=a[min][0];
				a[min][0]=a[i][0];
				a[i][0]=temp2;
			
		
	}
	printf("\n\nValues of polynomial after sorting : ");
	for(i=0;i<4;i++)
	{
		printf("%dx^%d + ",a[i][0],a[i][1]);
	}
	
}
