#include<stdio.h>
#include<math.h>
int t,n,a[210],x,i;
int main(){
    scanf("%d",&n);
    for(i=0;i<n;++i) scanf("%d",&a[i]);
    scanf("%d",&x);
    x%=n;
    for(i=n;i<n*2;++i) a[i]=a[i-n];
    for(i=x;i<x+n;++i) printf("%d ",a[i]);
}
