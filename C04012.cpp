#include<stdio.h>
#include<math.h>
int t,n,a[105],b[100005],i,j;
int main(){
    scanf("%d",&n);
    for(j=0;j<n;++j){
        scanf("%d",&a[j]);
        b[a[j]]++;
    }
    for(j=0;j<n;++j)
        if (b[a[j]]>1){
            printf("%d ",a[j]);
            b[a[j]]=0;
        }
}
