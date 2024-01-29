//checking if the paranthesis are balanced using stack

#include<stdio.h>
#include<string.h>

char stack[100],a[100],elem;
char *e;
int top=-1,i,size;

void push(char elem)

	{
		top++;
		printf("Pushed : %c\n",elem);
		stack[top]=elem;
	}


void pop()
{
	if(top==-1)
	{
		printf("stack underflow");
	}
	else
	{
		printf("\nPopped : %s",stack[top]);
		top--;
	}
}

void read()
{

	printf("Enter the equation : ");
	scanf("%s",a);
	printf("%s",a);
	
}

int main()
{
    read();
    e=a;
    while(*e != '\0')
	{
		if(*e=='(')
		{
			push(*e);
		}
		else if(*e==')')
		{
			pop();
		}
	}
	check();
	return 0;
}


void check()
{
	if(top==-1)
	{
		printf("The paranthesis are balanced");
	}
	else
	{
		printf("The paranthesis are not balanced");
	}
}
