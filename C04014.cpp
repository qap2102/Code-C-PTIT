#include<stdio.h>
#include<math.h>
int t,n,a[105],b[100005],i,j;
int main(){
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(i=0;i<n;++i)
        if (b[a[i]]>0){
        printf("%d %d\n",a[i],b[a[i]]);
        b[a[i]]=0;
    }
}
