#include<stdio.h>
#include<math.h>
int t,n,a[105],i,j,tg;
void print(){
    int i;
    for(i=0;i<n;++i) printf("%d ",a[i]);
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n-1;++i){
        printf("Buoc %d: ",i+1);
        for(j=i+1;j<n;++j)
            if (a[i]>a[j]){
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        print();
        printf("\n");
    }
}
