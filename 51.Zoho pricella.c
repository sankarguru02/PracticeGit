#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int i,n,j,totcol,s,k=1,l,mid,m;
char a[100];
void main()
{
	zoho9();
}

void zoho1()
{
	n=4;
	for(i=1;i<=n;i++)
	{
		for(s=i;s<n;s++)
		{
			printf(" ");
		}
		
		for(j=1;j<=n;j++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
}

void zoho2()
{
   n=5;
   for(i=1;i<=n;i++)
   {
   	for(s=i;s<=n;s++)
   	{
   		printf(" ");
    }
   	for(j=1;j<=i;j++)
   	{
   		if(j==1 || j==i)
   		{
   		printf("1 ");	
		}
		else
		{
			printf("%d ",i);
		}
	}
	printf("\n");
   }
}

void zoho3()
{
	n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%2!=0)
			{
				j%2==0?printf("0 ") : printf("1 ");
			}
			else
			{
				j%2==0?printf("1 ") : printf("0 ");
			}
			
		}
		printf("\n");
	}
}

void zoho4()
{
	printf("Enter the string : ");
	gets(a);
	l=strlen(a);
	mid=l/2;
   
}

void zoho5()
{
   n=5;
   for(i=0;i<n;i++)
   {
   	totcol =2*i+1;
   	for(s=totcol;s<2*n-1;s++)
   	{
   		printf(" ");
    }
   	for(j=0;j<totcol;j++)
   	{
   		mid=(totcol)/2;
        j<=mid?printf("%d ",i-j):printf("%d ",j-i);
        
	}
	printf("\n");
   }
}

void zoho6()
{
	n=5;
	for(i=1;i<=n;i++)
	{
		totcol=2*i-1;
		for(s=totcol;s<2*n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=totcol;j++)
		{
			mid=(totcol+1)/2;
			j<=mid?printf("%d ",j):printf("%d ",j-i);
		}
		printf("\n");	
	}
}

void zoho7()
{
	n=10;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			j==1||j==i||j==n||i==1||i==n||i+j==n+1?printf("*"):printf(" ");
		}printf("\n");
	}
}

void zoho8()
{
	n=5;
	for(i=1;i<=n;i++)
	{
		
		totcol=2*i-1;
		for(s=totcol;s<2*n;s++)
		{
			printf(" ");
		}
		k=1;
		for(j=1;j<=totcol;j++)
		{
		
			if(j==1||j==totcol)
				printf("1 ");
			else
			{
				mid=(totcol+1)/2;
				j<=mid?printf("%d ",k*=2):printf("%d ",k/=2);
			}
		}
		printf("\n");
	}	
}

void zoho9()
{
	n=20;
	for(i=1;i<=n;i++)
	{
		totcol=2*i;
		for(j=1;j<=totcol/2;j++)
		{
			printf("*");
		}
		for(s=totcol;s<2*n;s++)
		{
			printf(" ");
		}
		for(j=1;j<=totcol/2;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void zoho10()
{
	n=30;
	for(i=n;i>=1;i--)
	{
		totcol=2*i;
		for(j=1;j<=totcol/2;j++)
		{
			printf("*");
		}
		for(s=totcol;s<2*n;s++)
		{
			if(i==1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		for(j=1;j<=totcol/2;j++)
		{
			
			printf("*");
	    }
	
		printf("\n");
	}
}

void pattern1()
{
	n=18;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void pattern2()
{
	n=5;
	k=n;
	for(i=2*n;i>=1;i--)
	{
		totcol=i>=n?k--:n-i+1;
		for(j=1;j<=totcol;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}



