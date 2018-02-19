
#include<stdio.h>
void main()
{
int n,a,count,i,d;
printf("enter the number");
scanf("%d",&n);
printf("enter the no for printf last characters");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(n!=0)
{
count=0;
d=n%10;
n=n/10;
count=count+d;

printf("the number is  %d", count);

}
}
}


