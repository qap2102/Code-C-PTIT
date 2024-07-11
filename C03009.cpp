#include <stdio.h>
#include <math.h>
int i,a,b,c,f[4]={6,28,496,8128};
int main(){
    scanf("%d%d",&a,&b);
    if (a>b){
        c=a;
        a=b;
        b=c;
    }
    for(i=0;i<4;++i)
        if (f[i]>=a&&f[i]<=b) printf("%d ",f[i]);
}
