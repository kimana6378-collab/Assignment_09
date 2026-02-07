#include <stdio.h>
#include <conio.h>
int main(){
	int a1,d,n,an;
	printf("enter the Initial term(a1): ");
	scanf("%i",&a1);
	printf("enter the diffeerence of sequence (d): ");
	scanf("%i",&d);
	printf("enter number of elment in squence (n): ");
	scanf("%i",&n);
	an=a1+(n-1)*d;
	printf("n-th term of squence is: %i",an);
	
}
