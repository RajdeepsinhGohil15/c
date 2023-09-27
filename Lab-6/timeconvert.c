//convert seconds into hour,min,sec: HH:MM:SS
#include<stdio.h>
void main()
{
	int  s,h,m;
	
	printf("enter value of seconds:");
	scanf("%d",&s);
	
	h = s/3600;
	s= s-(h*3600);
	m= s/60;
	s= s-(m*60);
	
	printf("time:%02d:%d:%d",h,m,s);
	
}
