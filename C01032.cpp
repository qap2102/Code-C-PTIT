#include<stdio.h>
#include<math.h>
int t,n,i,p;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        p=1;
        for(i=2;i<=sqrt(n);i++)
            if (n%i==0){
                p*=i;
                while(n%i==0) n/=i;
            }
        if (n>1) p*=n;
        printf("%d\n",p);
    }
}
