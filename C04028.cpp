#include<stdio.h>
#include<math.h>
int t,n,a[105],b,i,j,z,cnt;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Buoc 0: %d\n",a[0]);
    for(i=1;i<n;++i){
        printf("Buoc %d: ",i);
        b=a[i];
        j=i-1;
        while(j>=0&&a[j]>b){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=b;
        for(j=0;j<=i;++j) printf("%d ",a[j]);
        printf("\n");
    }
}
