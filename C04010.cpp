#include<stdio.h>
#include<math.h>
#include<limits.h>
int t,n,a[105],i,min1,min2;
int main(){
    scanf("%d",&n);
    min1=INT_MAX;
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
        if (min1>a[i]) min1=a[i];
    }
    min2=INT_MAX;
    for(i=0;i<n;++i)
        if (a[i]>min1&&min2>a[i]) min2=a[i];
    printf("%d %d",min1,min2);
}
