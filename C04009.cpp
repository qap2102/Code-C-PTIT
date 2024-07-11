#include<stdio.h>
#include<math.h>
int t,n,a[105],i;
int main(){
    scanf("%d",&n);
    for(i=0;i<n;++i) scanf("%d",&a[i]);
    for(i=0;i<n;++i)
        if (a[i]%2==0) printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<n;++i)
        if (a[i]%2==1) printf("%d ",a[i]);
}
