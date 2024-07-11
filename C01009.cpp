#include <stdio.h>
int main(){
	int n;
	scanf ("%d", &n);
	if (n>100) return 0;
	else {
		double  k=(1.0*n*9/5)+32;
		printf ("%.2lf", k);
	}
}
