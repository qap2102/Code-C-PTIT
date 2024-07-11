#include<stdio.h>
#include<math.h>

int t,n,a,b,i;

int check(int n){
    int a=n%10;
    n/=10;
    while(n>0){
        if (a<n%10) return 0;
        a=n%10;
        n/=10;
    }
    return 1;
}

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        a=1;
        for(i=0;i<n-1;++i) a*=10;
        b=a*10-1;
        for(i=a;i<=b;++i)
            if (check(i)) printf("%d ",i);
        printf("\n");
    }
}   
