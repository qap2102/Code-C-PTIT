#include<stdio.h>
#include<math.h>
int t,n,p,ans;
int res(int n,int x){
    int ans=0;
    while(n){
        ans+=n/x;
        n/=x;
    }
    return ans;
}
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&p);
        printf("%d\n",res(n,p));
    }
}
