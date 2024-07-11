#include<stdio.h>
#include<math.h>
int t,n,i,j,cnt;
int main(){
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        scanf("%d",&n);
        printf("Test %d: ",i);
        for(j=2;j*j<=n;++j){
            cnt=0;
            while(n%j==0){
                cnt++;
                n/=j;
            }
            if (cnt>0) printf("%d(%d) ",j,cnt);
        }
        if (n>1) printf("%d(1)",n);
        printf("\n");
    }
}
