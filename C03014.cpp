#include <stdio.h>
long long gcd(long long a, long long b){
	while (b!=0){
		long long k=a%b;
		a=b;
		b=k;
	}
	return a;
}
long long lcm(long long a, long long b){
	return a * b /gcd(a,b);
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long a, b;
		scanf ("%lld%lld", &a, &b);
		printf ("%lld ", lcm(a,b));
		printf ("%lld", gcd(a,b));
		printf ("\n");
	}
}

