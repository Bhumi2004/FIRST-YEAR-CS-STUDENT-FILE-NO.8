#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of two integer before swaping\n");
	scanf("%d%d",&a,&b);
	if(a==b&&b==a)
	{
		printf("value after swaping two integer");
	}
	printf("your first value after swaping two integers is %d",b);
	printf("your second value after swaping two integers is %d",a);
	return 0;
}
