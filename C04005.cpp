#include<stdio.h>
#include<math.h>
int t,n,a[105],i,max;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        max=0;
        for(i=0;i<n;++i){
            scanf("%d",&a[i]);
            if (max<a[i]) max=a[i];
        }
        printf("%d\n",max);
        for(i=0;i<n;++i)
            if (a[i]==max) printf("%d ",i);
        printf("\n");
    }
}
