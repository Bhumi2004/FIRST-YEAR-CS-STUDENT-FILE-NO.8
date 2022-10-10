#include<stdio.h>
int main()
{
	int SUCCESS,FAIL,TOTAL,marks;
	printf("enter the marks of all five subject\n");
	scanf("%d",&marks);
	TOTAL=500;
	if(marks>165)
	{
		printf("SUCCESS");
	}
	else if(marks<165)
	{
		printf("FAIL");
	}
	 
	return 0;
}
