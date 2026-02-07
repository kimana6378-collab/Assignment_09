#include <stdio.h>
#include <conio.h>
int main (){
	float 
	s_per_hour,
	h_of_work_per_month,
	expect;
	printf("salary per hour: ");
	scanf("%f",&s_per_hour);
	printf("enter the number salary of hour worked in the onlast month: ");
	scanf("%f",&h_of_work_per_month);
	expect=s_per_hour*h_of_work_per_month;
	printf("your expected salary should be: %.0f",expect);
	
}
