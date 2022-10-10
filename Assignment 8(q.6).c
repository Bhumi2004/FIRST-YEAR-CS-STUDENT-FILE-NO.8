#include<stdio.h>
int main()
{
	int month;
	printf("enter the number of months(1-12)\n");
	scanf("%d",&month);
	 if(month==1)
	 {
	 	printf("31 days,jan");
	 }
	 else if(month==2)
	 {
	 	printf("28 days,feb");
	 }
	 else if(month==3)
	 {
	 	printf("31days,mar");
	 }
	 else if(month==4)
	 {
	 	printf("30days,apr");
	 }
	 else if(month==5){
	 	printf("31 days,may");
	 }
	 else if(month==6){
	 	printf("30 days,june");
	 }
	 else if(month==7){
	 	printf("31 days,july");
	 }
	 else if(month==8){
	 	printf("31 days,aug");
	 }
	 else if(month==9){
	 	printf("30 days,sep");
	 }
	 else if(month==10){
	 	printf("31 days,oct");
	 }
	 else if(month==11){
	 	printf("30 days,nov");
	 }
	 else if(month==12){
	 	printf("31 days,dec");
	 }
	 
	 return 0;
}
	

