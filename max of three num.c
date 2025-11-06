/* write a c program to find maximum of three integer numbers using conditional operators */
#include<stdio.h>
int main()
 {
 	int a,b,c,max;
 	printf("enter any three numbers");
 	scanf("%d%d%d",&a,&b,&c);
 	max=(a>b)?(a>c?a:c):(b>c?b:c);
 	printf("max if three numbers=%d",max);
 }
