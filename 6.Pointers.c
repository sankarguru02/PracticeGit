#include<stdio.h>
#include<stdlib.h>
int x,y;
void pointer(int *a, int *b)
{
	printf("\n%d \n %d",*a,*b);
	x=*a+*b;
	y= *a - *b;
	printf("\n\nAddition of Pointers in function : ");
	printf("%d \t %d ",x,y);
}
void main()
{
	int a,b,c,d,e,f;
	int *p,*pp;
	a=9;
	b=10;
    p=&a;
    pp=&b;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",p);
    printf("%d\n",pp);
    printf("%d\n",*p);
    printf("%d\n",*pp);	
    printf("Addition of two elements:\n");
    c=a+b;
    d=*p +*pp;
    printf("%d\n%d",c,d);
    printf("\nSubtraction of two elements : \n");
    e= *p-*pp;
    f=abs(*p-*pp);
    printf("%d\n%d",e,f);
    printf("\nCalling a function\n");
    pointer(p,pp);
    
    
}
