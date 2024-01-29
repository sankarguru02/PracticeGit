//String reverse using stack

#include<stdio.h>
#include<string.h>
int i,top=-1;
char string[100],output[100],stack[100],o;

void push (char o)
{
	if(strlen(string)==top+1)
	{
		printf("stack overflow");
	}
	else
	{
		top++;
		stack[top]=o;
		printf("\nPushed : %c",o);
	}
}

char pop()
{
	if(top==-1)
	{
		printf("stack underflow");
	}
	else
	{
		printf("\nElement popped : %c",stack[top]);
		return stack[top--];
	}
}

int main()
{
	printf("Enter the string : ");
	scanf("%s",&string);
	printf("Pushing into stack");
	for(i=0;i<strlen(string);i++)
	{
		push(string[i]);
	}

	for(i=0;i<strlen(string);i++)
	{
		output[i]=pop();
	}
	printf("\n\n\nReverse of the string using pop : ");
	for(i=0;i<strlen(string);i++)
	{
		printf("%c",output[i]);
	}
	return 0;
}
