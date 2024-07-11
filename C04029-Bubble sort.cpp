#include<stdio.h>
#include<math.h>
int n,a[105],i,j,cnt;
void print(){
    for(int i=0;i<n;++i) printf("%d ",a[i]);
}

void swap(int *a,int *b){
    int tg=*a;
    *a=*b;
    *b=tg;
}

int check(){
    for(int i=0;i<n-1;++i)
        if (a[i]>a[i+1]) return 0;
    return 1;
}

int main(){
    scanf("%d",&n);
    for(i=0;i<n;++i) scanf("%d",&a[i]);
    cnt=0;
    for(i=0;i<n-1;++i){
        for(j=0;j<n-i-1;++j)
            if (a[j]>a[j+1]) swap(&a[j],&a[j+1]);
        printf("Buoc %d: ",i);
        print();
        printf("\n");
        if (check()) break;
    }
}
