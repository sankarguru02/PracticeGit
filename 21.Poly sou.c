#include<stdio.h>
void main()
{
int a[3][2]={{3,4},{4,1},{2,5}},i,j;
int min,temp,temp1;
for(i=0;i<3;i++)
{   min=i;
    for( j=i+1;j<3;j++)
    {
        if(a[j][1]<a[min][1])
            min=j;
    }
    temp=a[min][0];
    a[min][0]=a[i][0];
    a[i][0]=temp;
    
    
    temp1=a[min][1];
    a[min][1]=a[i][1];
    a[i][1]=temp1;
}
printf("After sorting the polynomial:\n");
for( i=0;i<3;i++)
{
  printf("%d(x^%d)+\t",a[i][0],a[i][1]);
}
}
