#include <stdio.h>
#include <conio.h>
int main(){
	int d,h,speed;
	printf("enter distance(km): ");
	scanf("%i",&d);
	printf("enter km/h: ");
	scanf("%i",&h);
	/*time=km/k;
	printf("%i",time);*/
	speed=(d%h)/60;
	printf("%i",speed);
	
	
}
