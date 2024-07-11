#include<stdio.h>
#include<math.h>
int t,a,i,j,kt;
int palin(long long n){
    long long n1=n,s=0;
    while(n>0){
        s=s*10+n%10;
        n/=10;
    }
    return s==n1;
}

int main(){
    scanf("%d",&t);
    while(t--){
    	long long n;
        scanf("%lld",&n);
        a=n%10;
        n/=10;
        long long n1=0;
        while(n>=10){
            n1=n1*10+n%10;
            n/=10;
        }
        printf("%s\n",((a==2*n||n==2*a)&&palin(n1)?"YES":"NO"));
    }
}
