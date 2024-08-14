#include<stdio.h>
#include<math.h>
int n,m,max,a,i,j;
int main(){
    scanf("%d%d",&n,&m);
    max=n;
    if (max<m) max=m;
    for(i=1;i<=n;++i){
        a=max-i+1;
        if (a-m+1>0)
            for(j=a;j>=a-m+1;--j) printf("%d",j);
        else{
            for(j=a;j>=1;--j) printf("%d",j);
            for(j=2;j<=m-a+1;++j) printf("%d",j);
        }
        printf("\n");
    }
}
