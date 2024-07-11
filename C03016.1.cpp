#include <stdio.h>
#include<math.h>
int fb(long long n){
	if(n==0||n==1) return 1;
	else {
		long long f1=0, f2=1;
		for(int i=3;i<=93;i++){
			long long x=f1+f2;
			if(x==n) return 1;
			f1=f2;
			f2=x;
		}
	}
	return 0;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long n;
		scanf ("%lld", &n);
		if(fb(n)) printf ("YES\n");
		else printf ("NO\n");
	}
}
