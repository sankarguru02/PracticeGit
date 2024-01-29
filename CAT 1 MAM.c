//to check wheather the 3x3 matrix is a palindrome horizontally or vertically or diagnollay

#include<stdio.h>
int a[10][10],i,j,r,c,flag;

void read()
{
	printf("Enter the no. of rows : ");
	scanf("%d",&r);
	printf("Enter the no. of columns : ");
	scanf("%d",&c);
	printf("\nEnter the matrix elements : ");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
}

void display()
{
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
}

void checkhori()
{
	for(i=0;i<r;i++)
	{
		flag=1;
		for(j=0;j<c/2;j++)
		{
			if(a[i][j] != a[i][c-1-j])
			{
				flag=0;
			}
		}
		if(flag==1)
		{
		printf("\n%d row is a  palindrome",i+1);
	    }
	}
}

void checkverti()
{
	for(i=0;i<r;i++)
	{
		flag=1;
		for(j=0;j<c/2;j++)
		{
			if(a[j][i] != a[j][c-1-i])
			{
				flag=0;
			}
		}
		if(flag==1)
		{
		printf("\n%d column is a  palindrome",i+1);
    	}
	}
	
}

void checkdiagnol()
{
	for(i=0;i<r;i++)
	{
		flag=1;
		for(j=0;j<c/2;j++)
		{
			if(a[i][j]!=a[r-1][c-1])
			{
				flag=0;
			}
		}
		if(flag==1)
		{
		printf("\n%d diagnol is a  palindrome",i+1);
    	}
	}
	
}

void main()
{
	read();
	display();
	checkhori();
	checkverti();
	checkdiagnol();
}
