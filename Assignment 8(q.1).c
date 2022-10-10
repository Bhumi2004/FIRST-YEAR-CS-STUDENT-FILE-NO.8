#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value\n");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("enter the largest number is \n");
	
	
	if(a>b,c)
	{
		printf("greatest is a");

}
  if(a>c&&a>b)
  {
  	printf("greatest is a");
  }
  
  if(b>a&&b>c){
  	printf("greatest is b ");
  }
  if(b>c&&b>a)
  {
  	printf("greatest is b");
  	
  }
  if(c>a&&c>b)
  {
  	printf("greatest is c");
}
  if(c>b&&c>a)
  {
  	printf("greatest is c");
  }
  return 0;
}
