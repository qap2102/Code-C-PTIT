#include<stdio.h>
#include<math.h>
int t,n,a[1005],b[1005],c[1005],i,j,z,x,cnt,max,sz;
int main(){
    scanf("%d",&t);
    for(i=1;i<=t;++i){
        printf("Test %d:\n",i);
        scanf("%d",&n);
        for(j=0;j<n;++j) scanf("%d",&a[j]);
        max=0;
        cnt=1;
        sz=0;
        x=0;
        for(j=0;j<n-1;++j)
            if (a[j]<a[j+1]) cnt++;
            else{
                b[sz]=x;
                c[sz]=j;
                sz++;
                x=j+1;
            }
        b[sz]=x;
        c[sz]=n-1;
        sz++;
        max=c[0]-b[0]+1;
        for(j=1;j<sz;++j)
            if (max<c[j]-b[j]+1) max=c[j]-b[j]+1;
        printf("%d\n",max);
        for(j=0;j<sz;++j)
            if (max==c[j]-b[j]+1){
                for(z=b[j];z<=c[j];++z) printf("%d ",a[z]);
                printf("\n");
            }
    }
}
