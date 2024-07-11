#include<stdio.h>
#include<math.h>
int a,b,c,i,f[4]={1,2,145,40585};
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
