#include<stdio.h>
#include<math.h>
 
#define foru(i,a,b) for(ll i=a;i<=b;++i)
#define ford(i,b,a) for(ll i=b;i>=a;--i)
#define ll long long
 
int t;
ll n,a;
 
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        for(ll i=2;i*i<=n;++i)
            if (n%i==0){
                while(n%i==0) n/=i;
                a=i;
            }
        if (n>1) a=n;
        printf("%lld\n",a);
    }
}  
