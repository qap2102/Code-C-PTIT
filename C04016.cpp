#include<stdio.h>
#include<math.h>
int t,n,a,b[100005],i,j,max;
int nt(int n){
    for(int i=2;i<=sqrt(n);++i)
        if (n%i==0) return 0;
    return n>1;
}
int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        printf("Test %d:\n",i);
        max=0;
        for(j=0;j<n;++j){
            scanf("%d",&a);
            if (max<a) max=a;
            if (nt(a)) b[a]++;
        }
        for(j=1;j<=max;++j)
            if (b[j]>0){
                printf("%d xuat hien %d lan\n",j,b[j]);
                b[j]=0;
            }
    }
}
