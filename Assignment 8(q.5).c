#include<stdio.h>
int main()
{
	int a;
	printf("enter the value\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("positive");
	}
	if(a<0)
	{
		printf("negative");
	}
	else if(a==0)
	{
		printf("zero");
	}
	return 0;
}
