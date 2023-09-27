//max of 3
#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("enter value of a:");
	scanf("%d",&a);
	
	printf("enter value of b:");
	scanf("%d",&b);
	
	printf("enter value of c:");
	scanf("%d",&c);
	
	if (a>b)
		{
			
		if (a>c)
			printf("a = %d is max",a);
			
		else 
			printf("c = %d is max",c);
			
		}
		
	else if (b>a)
	     {
	     	
		 if (b>c)
		 printf("b = %d is max",b);
		 
		 else 
			printf("c = %d is max",c);
		 
		 }
		
}
