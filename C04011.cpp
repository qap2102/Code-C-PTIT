#include<stdio.h>
#include<math.h>
int t,n,a[55],i,ans,max;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;++i) scanf("%d",&a[i]);
        ans=1;
        max=a[0];
        for(i=1;i<n;++i)
            if (a[i]>=max){
                ans++;
                max=a[i];
            }
        printf("%d\n",ans);
    }
}
