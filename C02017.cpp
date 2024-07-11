#include<stdio.h>
#include<math.h>
int n,i,j;
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        for(j=1;j<=i*2-1;j+=2) printf("%d",j);
        for(j=i*2-3;j>=1;j-=2) printf("%d",j);
        printf("\n");
    }
}
