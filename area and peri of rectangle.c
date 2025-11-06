/*write a c program on area of rectangle and perimeter */
#include<stdio.h>
int main()
{
	int l,b,a,p;
	printf("enter the value of l");
	scanf("%d",&l);
	printf("enter the value of b");
	scanf("%d",&b);
	a= l*b;
	p=2*(l+b);
	printf("area of reactangle= %d",a);
	printf("perimeter of rectangle=%d",p);	
}
