#include<stdio.h>
#include<math.h>
int n,a,i,s;
int main(){
    scanf("%d",&n);
    for(i=2;i*i<=n;++i)
        while(n%i==0){
            printf("%d",i);
            n/=i;
            if (n>1) printf("x");
        }
    if (n>1) printf("%d",n);
}
