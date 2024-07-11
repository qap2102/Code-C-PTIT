#include<stdio.h>
#include<math.h>
int n,i,j;
char a;
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        a='A'+i-1;
        for(j=1;j<=i;j++){
            printf("%c ",a);
            a+=(n-j);
        }
        printf("\n");
    }
}
