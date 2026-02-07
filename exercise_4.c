#include <stdio.h>
#include <conio.h>
int main(){
	int km,k,time;
	printf("enter distance(km): ");
	scanf("%i",&km);
	printf("enter km/h: ");
	scanf("%i",&k);
	/*time=km/k;
	printf("%i",time);*/
	time=km%k;
	printf("%i",time);
	
	
}
