#include<stdio.h>
#include<math.h>
int t,a,b,i,ans;
int check(int n){
    int a=n%10;
    n/=10;
    while(n>0){
        if (a>=n%10) return 0;
        a=n%10;
        n/=10;
    }
    return 1;
}

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        ans=0;
        for(i=a;i<=b;++i)
            if (check(i)) ans++;
        printf("%d\n",ans);
    }
}
