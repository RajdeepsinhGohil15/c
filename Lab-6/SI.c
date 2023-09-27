//simple interest
#include<stdio.h>
void main()
{
	float P,R,N,I;
	
	printf("enter value of p:");
	scanf("%f",&P);
	
	printf("enter value of r:");
	scanf("%f",&R);
	
	printf("enter value of n:");
	scanf("%f",&N);
	
	I = P*R*N/100;
	printf("I:%f",I);
	
	
}
