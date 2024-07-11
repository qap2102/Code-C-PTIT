#include<stdio.h>
#include<math.h>
int fb (long long n){
    if (n==1||n==0) return n;
    long long f1=1,f2=0 ,x=0 ;
    for (long long i=2;i<=92;i++){
        x = f1+f2;
        if (x==n) return 1;
        f2=f1;
        f1=x;
    }
    return 0;
}
int main(){
	int t;
	scanf ("%d", &t);
	while(t--){
		long long n;
		scanf ("%lld", &n);
		if(fb(n)) printf("YES\n");
		else printf ("NO\n");
	}
}
