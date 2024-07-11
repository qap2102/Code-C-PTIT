#include<stdio.h>
#include<math.h>
int t,n,i,ans;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ans=0;
        for(i=1;i*i<=n;++i)
            if (n%i==0){
                if (i%2==0) ans++;
                if (n/i!=i&&n/i%2==0) ans++;
            }
        printf("%d\n",ans);
    }
}
