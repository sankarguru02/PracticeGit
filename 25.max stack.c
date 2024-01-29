//finding the maximum elemenent in the stack

#include<stdio.h>

int stack[100],stack_max[100],top=-1,i,n,size,elem,max,a[100];
void push(int elem);
void push_max();

void main()
{
	printf("Enter the no.of elemenets : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the  element : ");
		scanf("%d",&a[i]);
		push(a[i]);
	}
	get_max();
}

push(int elem)
{
	top++;
	stack[top]=elem;
	printf("Pushed : %d",stack[top]);
	push_max();
}

push_max()
{
	if(top==0)
	{
		stack_max[top]=stack[top];
	}
	else if(top>0)
	{
		if(stack[top]>stack_max[top-1])
		{
			stack_max[top]=stack[top];
		}
		else
		{
			stack_max[top]=stack_max[top-1];
		}
	}
}

void get_max()
{
	printf("\n\nThe maximum element in the stack is : %d",stack_max[top]);
}
