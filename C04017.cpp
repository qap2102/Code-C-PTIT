#include<stdio.h>
#include<math.h>
int n,a,b[105],i,cnt;
int nt(int n){
    int i;
    for(i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}

int main(){
    scanf("%d",&n);
    cnt=0;
    for(i=0;i<n;++i){
        scanf("%d",&a);
        if (nt(a)) b[cnt++]=a;
    }
    printf("%d",cnt);
    for(i=0;i<cnt;++i) printf(" %d",b[i]);
}
