#include<stdio.h>
#include<math.h>
int t,n,a[105],b[100005],c[105],i,cnt;
int main(){
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    cnt=0;
    for(i=0;i<n;++i)
        if (b[a[i]]>1){
            c[cnt++]=a[i];
            b[a[i]]=0;
        }
    printf("%d\n",cnt);
    for(i=0;i<cnt;++i) printf("%d ",c[i]);
}