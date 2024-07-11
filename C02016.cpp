#include<stdio.h>
#include<math.h>
int n,i,j;
int main(){
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        if (i%2==1)
            for(j=1;j<=i*2-1;j+=2) printf("%d",j);
        else
            for(j=2;j<=i*2;j+=2) printf("%d",j);
        printf("\n");
    }
}
