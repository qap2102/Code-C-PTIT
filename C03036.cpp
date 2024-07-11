#include<stdio.h>
#include<math.h>
int check(long long n){
    long long n1=n,s1=0,s2=0;
    while(n>0){
        s1=s1*10+n%10;
        s2+=n%10;
        n/=10;
    }
    return s1==n1&&s2%2==1;
}

int lecs(long long n){
    int a;
    while(n>0){
        a=n%10;
        if (a%2==0) return 0;
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
        printf("%s\n",(check(n)&&lecs(n)?"YES":"NO"));
    }
}
