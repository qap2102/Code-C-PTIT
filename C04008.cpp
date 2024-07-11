#include<stdio.h>
#include<math.h>
int t,n,m,a[105],b[105],p,i,j;
int main(){
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        scanf("%d%d%d",&n,&m,&p);
        for(j=0;j<n;++j) scanf("%d",&a[j]);
        for(j=0;j<m;++j) scanf("%d",&b[j]);
        printf("Test %d:\n",i);
        for(j=0;j<p;++j) printf("%d ",a[j]);
        for(j=0;j<m;++j) printf("%d ",b[j]);
        for(j=p;j<n;++j) printf("%d ",a[j]);
        printf("\n");
    }
}
