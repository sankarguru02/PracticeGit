// Push and Pop in stack

#include<stdio.h>

int i,stack[100],n,top=-1,val,choice,k;

void push(int elem)
{
	if(n==top+1)
	{
		printf("Stack overflow");
	}
	else
	{
		top++;
		stack[top]=elem;
		printf("Pushed : %d",stack[top]);	
	}
}

void pop()
{
	if(top==-1)
	{
		printf("stack underflow");
	}
	else
	{
	printf("Element popped : %d\n",stack[top]);
	top--;
	}
}
int main()
{
	printf("\nEnter the size  : ");
	scanf("%d",&n);
    do
	{
		printf("Press 1 to push \nPress 2 to pop \nYour choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
		
		case 1:
			{
				printf("\nEnter the element to push : " );
				scanf("%d",&val);
				push(val);
				break;
			}
		case 2:
			{
				pop();
				break;
			}
		default :
			{
				printf("Enter a vaild Choice !!! ");
				break;
			}
     	}
		printf("\nDo you wanna continue ... 1.Yes 2.No : ");
		scanf("%d",&k);
	
	}while(k==1);
    return 0;
}



