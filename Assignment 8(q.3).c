#include<stdio.h>
int main()
{
	int a;
	printf("enter the value\n");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("divisble by 2");
		
	}
	
	else if(a%3==0)
	{
		printf("divisible by 3");
	}
	return 0;
	
}
