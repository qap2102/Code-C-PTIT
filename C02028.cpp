#include<stdio.h>
#include<math.h>
int t,n,i,j;
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        for(j=i;j<=n;++j) printf("%c",'A'+2*j-2);
        printf("\n");
    }
}   
