#include<stdio.h>
#include<math.h>
int t,n,m,a[105],b[105],x,i;
int main(){
    scanf("%d %d",&n,&m);
    for(i=0;i<n;++i) scanf("%d",&a[i]);
    for(i=0;i<m;++i) scanf("%d",&b[i]);
    scanf("%d",&x);
    for(i=0;i<x;++i) printf("%d ",a[i]);
    for(i=0;i<m;++i) printf("%d ",b[i]);
    for(i=x;i<n;++i) printf("%d ",a[i]);
}
