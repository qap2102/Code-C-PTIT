#include<stdio.h>
#include <math.h>
int t,n,a;
int nt(int n){
    int i;
    for(i=2;i<=sqrt(n);++i)
        if (n%i==0) return 0;
    return n>1;
}

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        while(n--){
            scanf("%d",&a);
            if (nt(a)) printf("%d ",a);
        }
        printf("\n");
    }
}
