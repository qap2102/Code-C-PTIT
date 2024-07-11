#include<stdio.h>
#include<math.h>
int t,n,a[105],i,j,cnt;

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
        printf("Buoc %d: ",i+1);
        cnt=i;
        for(j=i+1;j<n;++j)
            if (a[cnt]>a[j]) cnt=j;
        swap(&a[i],&a[cnt]);
        print();
        printf("\n");
    }
}
