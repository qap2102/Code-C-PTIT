#include<stdio.h>
#include<math.h>
int n,m,i,j;
int main(){
    scanf("%d%d",&n,&m);
    for(i=n;i>=1;--i){
        if (i<=m){
            for(j=1;j<=m-i+1;++j) printf("%c",'A'+i+j-2);
            for(j=m-i+2;j<=m;++j) printf("%c",'A'+m-1);
        }
        else
            for(j=1;j<=m;++j) printf("%c",'A'+m-1);            
        printf("\n");
    }
}
