
#include<stdio.h>

int a[100][100],i,size,j,r,c,rem,output[5][5],top=-1,stack[5],k,v,count=0;
void push();
int pop();
void check();


void input()
{
	printf("Enter the 2D array values : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

void printmatrix()
{
	printf("Matrix form : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  printf("%d\t",a[i][j]);
	    }
	    printf("\n");
    }  	
}

void horizontal()
{
	printf("\n\nCHECKING HORIZONTALLY\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   push(a[i][j]);
		}
		printf("\n");
		
		for(j=0;j<c;j++)
		{
			output[i][j] = pop();
		}
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf(" %d",output[i][j]);
		}
		printf("\n");
			for(j=0;j<c;j++)
		{
			printf(" %d",a[i][j]);
		}
		for(j=0;j<c;j++)
		{
			if(a[i][j]==output[i][j])
			{
				count=count+1;
			}
			if(count==3)
			{
				printf("\nThis is a palindrome\n");
			}
		}
		count=0;
	}
}

void vertical()
{
	printf("\n\nCHECKING VERTICALLY \n\n");
	for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
		   push(a[i][j]);
		}
		printf("\n");
		
		for(i=0;i<r;i++)
		
		{
			output[i][j] = pop();
		}
		printf("\n");
		for(i=0;i<r;i++)
		{
			printf(" %d",output[i][j]);
		}
		printf("\n");
			for(i=0;i<r;i++)
		{
			printf(" %d",a[i][j]);
		}
		for(i=0;i<r;i++)
		{
			if(a[i][j]==output[i][j])
			{
				count=count+1;
			}
			if(count==3)
			{
				printf("\nThis  is a palindrome\n");
			}
		}
		count=0;
	}
}

void diagnol()
{
	printf("\n\n CHECKING DIAGNOLLAY\n\n");
	for(i=0,j=0;i<r,j<c;i++,j++)
		{
		   push(a[i][j]);
		}
	for(i=0,j=0;i<r,j<c;i++,j++)
	{
		output[i][j] = pop();
	}
		for(i=0,j=0;i<r,j<c;i++,j++)
		{
			if(a[i][j]==output[i][j])
			{
				count=count+1;
			}
			if(count==3)
			{
				printf("\nThis  is a palindrome\n");
			}
        } count=0;
        
	}

void check()
{
	k=0;
	v=0;
   	    if(a[k][v]==output[k][v])
			{
			
				printf(" %d %d ",k,v);
			    if(a[k][v+1]==output[k][v+1])
			    {
				    k++;
				    v++;
				    printf("%d %d ",k,v);
				    if(a[k][v+2]==output[k][v+2])
			     	{
					    printf("\nThis row is a palindrome ");
				    }
			    }
            }   
	
	   }	



void push(int elem)
{
	top++;
	printf("\nPushed : %d",elem);
	stack[top]=elem;
}

int pop()
{
	printf("\nPopped : %d",stack[top]);
	return stack[top--];
}

void main()
{
	printf("Enter the  no of rows : ");
	scanf("%d",&r);
	printf("Enter the no of columns : ");
	scanf("%d",&c);
	input();
	printmatrix();
	horizontal();
	vertical();
	diagnol();
}




