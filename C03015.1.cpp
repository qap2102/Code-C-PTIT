#include<stdio.h>
#include<math.h>
int t;
long long n,a;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        for(long long i=2;i*i<=n;++i)
            if (n%i==0){
                while(n%i==0) n/=i;
                a=i;
            }
        if (n>1) a=n;
        printf("%lld\n",a);
    }
}  
