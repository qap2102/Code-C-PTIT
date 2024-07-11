#include<stdio.h>
#include<math.h>
int n,ans;
int nt(int n){
    for(int i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}
int res(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s%5==0;
}
int main(){
    scanf("%d",&n);
    ans=0;
    for(int i=1;i<=n-1;i++)
        if (nt(i)&&res(i)){
            printf("%d ",i);
            ans++;
        }
    printf("\n%d",ans);
}
