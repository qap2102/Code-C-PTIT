#include<stdio.h>
#include<math.h>
#define ll long long
int t,n,i;
ll a[100];
int main(){
    scanf("%d",&t);
    a[1]=1;
    a[2]=1;
    for(i=3;i<=92;++i) a[i]=a[i-1]+a[i-2];
    while(t--){
        scanf("%d",&n);
        printf("%lld\n",a[n]);
    }
}
