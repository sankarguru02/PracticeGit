//Polynomial sorting based on their coefficients

#include<stdio.h>
#include<stdlib.h>

int a[10][10],i=0,temp=0,j=0,temp2,n,x,y,min,p,q;
void exp();
void diplay();
void selectsort();

void main()
{
	printf("Enter the no of values : ");
	scanf("%d",&n);
	while(i<n)
	{
    	printf("Enter the coefficeint : ");
    	scanf("%d",&a[i++][0]);
    	exp();
	}
	display();
	selectsort();
    display();
    
}

void exp()
{
	printf("\nj=%d",j);
	printf("\ni=%d",i);
	printf("\nEnter the exponent : ");
	scanf("%d",&a[j++][1]);

}

void display()
{
	printf("\n");
	for(x=0;x<n;x++)
	{
		for(y=0;y<2;y++)
		{
			printf("%d\t",a[x][y]);
		}
		printf("\n");
	}
}

void selectsort()
{
	for(p=0;p<n;p++)
	{
		min=p;
		for(q=i+1;q<n;q++)
		{
		printf("\nloop\n");
		if(a[1][min]>a[1][q])
		{
		    min=q;
		}
		if(a[1][min]!=a[1][p])
		{
			temp=a[1][min];
			a[1][min]=a[1][p];
			a[1][p]=temp;
		}
		printf("\nchanged %d\n",a[1][p]);
      	}
    }
}


