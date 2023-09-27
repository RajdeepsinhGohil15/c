//convert days into year,week,day
#include<stdio.h>
void main()
{
	int d,y,m,w;
	
	printf("enter value of days:");
	scanf("%d",&d);
	
	y=d/365;
	d=d-(y*365);
	
	m=d/12;
	d=d-(m*12);
	
	w=d/48;
	d=d-(w*48);
	
	printf("%02d:%d:%d:%d",y,m,w,d);
	
	
}
