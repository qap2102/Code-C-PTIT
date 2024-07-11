#include <stdio.h>
void fb(int n){
	printf ("0 1 ");
	long long fb1=1, fb2=0;
	for (int i=3;i<=n;i++){
		long long fb=fb1+fb2;
		printf ("%lld ", fb);
		fb2=fb1;
		fb1=fb; 
	}
}
int main(){
	int n;
	scanf ("%d", &n);
	fb(n);
}
