#include<stdio.h>
#include<math.h>
int t,n,i,a[105];
int palin(int a[105],int n){
    int i;
    for(i=0;i<n/2;++i)
        if (a[i]!=a[n-i-1]) return 0;
    return 1;
}
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;++i) scanf("%d",&a[i]);
        printf("%s\n",(palin(a,n)?"YES":"NO"));
    }
}
