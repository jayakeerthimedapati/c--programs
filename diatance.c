/* write a c program to calculate distance travelled by an object */
#include<stdio.h>
int main()
{
	float acc,vel,dist;
	int time;
	printf("enter value for accleration");
	scanf("%f",&acc);
	
	printf("enter value for velocity");
	scanf("%f",&vel);
	
	printf("\nenter value for time");
	scanf("%d",&time);
	dist= (vel*time)+(acc*time*time)/2;
	
	printf("\n the distance is %f",dist);
}
