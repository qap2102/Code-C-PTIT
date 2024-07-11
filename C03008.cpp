#include <stdio.h>
#include <math.h>
int n,i,f[4]={6,28,496,8128};
int main(){
    scanf("%d",&n);
    for(i=0;i<4;++i)
        if (f[i]<n) printf("%d ",f[i]);
}
