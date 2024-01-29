#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i,j,s,totcol,k,mid,n,front,rear,size,a[100][100],len;

void main()
{
	snakept();
}

void decreasept()
{
	n=6;
	size=2*n-1;
	front=0;
	rear=size-1;
	while(n!=0)
	{
		for(i=front;i<=rear;i++)
		{
			for(j=front;j<=rear;j++)
			{
				if(i==front||j==front||i==rear||j==rear)
				{
					a[i][j]=n;
				}
				
			}
		}
		front++;
		rear--;
		n--;
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

void snakept()
{
	int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int c[100];
	n=sizeof(b[0])/sizeof(b[0][0]);
	len=n*n;
	k=0;
	printf("%d\n\n",len);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<n;j++)
			{
				c[k++]=b[i][j];
			}
		}
		else
		{
			for(j=n-1;j>=0;j--)
			{
				c[k++]=b[i][j];
			}
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d",c[i]);
	}
}

void snakept2()
{
	n=4;
	k=1;
	for(i=1;i<=n;i++)
	{
		for(s=i;s<n;s++)
		{
			printf(" ");
		}
		int bol=i%2!=0?1:2;
		switch(bol)
		{
			case 1:
				for(j=1;j<=n;j++)
				{
					printf("%d ",k++);
				}
				break;
			
			case 2:
				k=k+n-1;
				for(j=1;j<=n;j++)
				{
					printf("%d ",k--);
				}
				k=k+n+1;
				break;	
		}
		printf("\n");
	}
	
}













