/* write a c program to read temperature and convert from farenheit to celsius and celsius to farenhheit */
#include<stdio.h>
int main()
{
	float fah,cel;
	printf("enter the value of farenheit");
	scanf("%f",&fah);
	cel = (fah-32.0)*(5.0/9.0);
	printf("celsius is %f\n",cel);
	
	printf("\nenter the value of celsius");
	scanf("%f",&cel);
	fah = cel * (9.0/5.0)+32.0;
	printf("farenheit is %f\n",fah);
}
