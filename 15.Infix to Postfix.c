//infix to postfix conversion using stack

#include<stdio.h>
#include<string.h>

char stack[100],input[100],output[100],elem,temp;
int top=-1,i,size,j;
int precedence(char);

void push(char elem)
{
	if(size==top+1)
	{
		printf("stack overflow");
	}
	else
	{
		top++;
		printf("Pushed : %s\n",elem);
		stack[top]=elem;
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
		printf("\nPopped : %s",stack[top]);
		return(stack[top--]);
	}
}

void  read()
{
	printf("Enter the infix expression : ");
	scanf("%s",input);
	
}

void display()
{
	printf("\nThe given infix expression is : ");

		printf("%s",input);
	
}

int precedence(char ope)
{
	switch(ope)
	{
		case '^' :
			return 3;
			break;
		case '*' :
		case '/':
		case '%':
			return 2;
			break;
		case '+':
		case '-' :
			return 1;
			break;
		default :
			return 0;
			break;
	}
}


void main()
{
	read();
	display();
	j=-1;
	for(i=0;i<strlen(input);i++);
	{
	  if(isalpha(input[i]))
	  {
	  	output[++j]=input[i];
	  }
	  if(input[i]=='(')
	  {
	  	push(input[i]);
	  }
	  else if(input[i]=='*' || input[i]=='/' || input[i]=='^' || input[i]=='+' || input[i]=='-' || input[i]=='/' )
	  {
	  	temp=pop();
	  	if(temp='(')
	  	{
	  		push(temp);
	  		push(input[i]);	
    	}
    	else if(precedence(temp)>=precedence(input[i]))
		{
			output[++j]=temp;
			push(input[i]);	
        }
        else
        {
        	output[++j]==input[i];
		}
      }
	  else if(input[i]==')')
	  {
	  	temp=pop();
	  	while(temp !='(')
	  	{
	  	  output[++j]=temp;
		  temp=pop();
	    }
	   }
	  
    }
    printf("\n\n The Postifix expression is %s",output);
    postfix();
    
}

void postfix()
{
	printf("\nThe postfix expression is : ");

		printf("%s",output);
	
}

