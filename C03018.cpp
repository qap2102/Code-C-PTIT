#include <stdio.h>
#include <math.h>
int nt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			return 0;
		}
	}
	return n>1;
}
int fb (int n){
    if (n==1||n==0) return n;
    int f1=1,f2=0 ,x=0 ;
    for (int i=1;i<=17;i++){
        x = f1+f2;
        if (x==n) return 1;
        f2=f1;
        f1=x;
    }
    return 0;
}
int sum(int n){
	int ans=0;
	while (n>0){
		ans+=n%10;
		n/=10;
	}
	return fb(ans);
}
int main(){
	int a, b;
	scanf ("%d%d", &a, &b);
	if(a>b){
		int c=a;
		a=b;
		b=c;
	}
	for (int i=a;i<=b;i++){
		if (sum(i)&&nt(i)){
			printf ("%d ", i);
		}
	}
}
