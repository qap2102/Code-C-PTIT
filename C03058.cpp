#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(ll i=a;i<=b;++i)
#define ford(i,b,a) for(ll i=b;i>=a;--i)
#define ll long long

int t;
long long n,ans;
long long ucln(long long a,long long b){
    long long r;
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

long long bcnn(long long a,long long b){
    return a*b/ucln(a,b);
}

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        ans=1;
        for (long long i=1;i<=n;i++) ans=bcnn(ans,i);
        printf("%lld\n",ans);
    }
}
