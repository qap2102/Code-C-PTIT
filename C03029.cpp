#include<stdio.h>
#include<math.h>
int sum(long long n){
    int a;
    while(n>0){
        a=n%10;
        if (a%2==1) return 0;
        n/=10;
    }
    return 1;
}

int main(){
	long long t;
    scanf("%lld",&t);
    while(t--){
    	long long n;
        scanf("%lld",&n);
        if(sum(n)) printf ("YES\n");
        else printf ("NO\n");
    }
}
