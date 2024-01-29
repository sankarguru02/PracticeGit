//postfix equation to infix

#include<stdio.h>
#include<string.h>
#include<math.h>
int i,size,a,b,c,stack[100],top=-1;
char equ[9];

void main()
{

	printf("Enter the Postfix equation : ");
	scanf("%s",equ);
	size= (sizeof(equ)/sizeof(equ[0]));
	for(i=0;i<size;i++)
	{
		
	if(isdigit(equ[i]))
	{
		push(equ[i]-'0');
	}	
	else if(equ[i]== '*' || equ[i]== '/' ||equ[i]== '-' ||equ[i]== '+' ||equ[i]== '^' )
	{
		b=pop();
		a=pop();
		switch(equ[i])
		{
			case '+':
				c=a+b;
				break;
			case '-':
				c=a-b;
				break;
			case '/' :
				c=a/b;
				break;
			case '*' :
				c=a*b;
				break;
			case '^' :
				c=a^b;
				break;
		}
		push(c);
	}
		
	}
	printf("\n\nResult of this equation is : %d",stack[top]);
}

void push(int elem)
{
	top++;
	stack[top]=elem;
	
}

int pop()
{
	return(stack[top--]);
}
