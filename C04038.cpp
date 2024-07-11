#include<stdio.h>
#include<math.h>
int t,n,a[105],i,j,pos;
void print(){
    int i;
    for(i=0;i<n;++i) printf("%d ",a[i]);
}
void swap(int *a,int *b){
    int tg=*a;
    *a=*b;
    *b=tg;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n-1;++i){
        pos=i;
        for(j=i+1;j<n;++j)
            if (a[pos]>a[j]) pos=j;
        swap(&a[i],&a[pos]);
        print();
        printf("\n");
    }
}
