#include<stdio.h>
#include<math.h>
int n,m,i,j;
int main(){
    scanf("%d%d",&n,&m);
    for(i=0;i<n;++i){
        if (i<m){
            for(j=i;j<m;++j) printf("%c",j+'A');
            for(j=i-1;j>=0;--j) printf("%c",j+'A');
        }
        else for(j=m-1;j>=0;--j) printf("%c",j+'A');
        printf("\n");
    }
}
