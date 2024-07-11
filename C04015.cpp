#include<stdio.h>
#include<math.h>
int t,n,a[105],b[100005],i,j;
int main(){
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        scanf("%d",&n);
        printf("Test %d:\n",i);
        for(j=0;j<n;++j){
            scanf("%d",&a[j]);
            b[a[j]]++;
        }
        for(j=0;j<n;++j)
            if (b[a[j]]>0){
                printf("%d xuat hien %d lan\n",a[j],b[a[j]]);
                b[a[j]]=0;
            }
    }
}
