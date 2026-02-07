#include <stdio.h>
#include <conio.h>
int main (){
	int an,a1,n,sn;
	printf("n-th elment (an)");
	scanf("%i",&an);
	printf("initial term(a1)");
	scanf("%i",&a1);
	printf("total term n(n)");
	scanf("%i",&n);
	sn=(a1+an)*n/2;
	printf("sum of the sequence is %i",sn);
}
