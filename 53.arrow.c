#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int i,j,k,n,mid,totcol,s,totspace;

void main()
{
	arrow2();
}

void arrow()
{
	n=5;
	for(i=1;i<2*n;i++)
	{
		totcol=i<=n?i:2*n-i;
		totcol=i==n?2*i:totcol;
		for(s=totcol;s<n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=totcol;j++)
		{
			j==1||i==n?printf("*"):printf(" ");
		}
		printf("\n");
	}
}

void arrow2()
{
	n=5;
	for(i=1;i<2*n;i++)
	{
		totcol=i<=n?i:2*n-i;
		totspace=i<=n?(2*n-i+1)-totcol:2*n-totcol;
		for(s=1;s<totspace;s++)
		{
			printf(" ");
		}
		for(j=1;j<=totcol;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
	
	
	
	
	
	

