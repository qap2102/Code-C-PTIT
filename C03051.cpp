#include<stdio.h>
#include<math.h>

#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second

ll l,r;
int t,a,b,c[1000005],i,j,ans;

int main(){
    scanf("%d",&t);
    for(i=2;i<=1000000;++i) c[i]=1;
    for(i=2;i*i<=1000000;++i)
        if (c[i])
            for(j=i*i;j<=1000000;j+=i) c[j]=0;
    while(t--){
        scanf("%lld%lld",&l,&r);
        a=(int)sqrt(l);
        if (a*a<l) a++;
        b=(int)sqrt(r);
        ans=0;
        for(i=a;i<=b;++i)
            if (c[i]) ans++;
        printf("%d\n",ans);
    }
}
