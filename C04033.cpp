#include<stdio.h>
#include<math.h>
int t,n,a,b[100000],i;
int main(){
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&a);
        if (b[a]==0) printf("%d ",a);
        b[a]++;
    }
}
