#include<stdio.h>
#include<math.h>
#include<limits.h>
int n,k,a;

int main(){
    scanf("%d%d",&n,&k);
    a=0;
    while(n>0){
        a+=n/2;
        n/=2;
    }
    printf("%s",(a>=k?"Yes":"No"));
}
