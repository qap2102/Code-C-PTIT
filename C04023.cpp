#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[1005];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
    for(int i=0;i<n-1;++i)
        for(int j=i+1;j<n;++j)
            if (a[i]>a[j]){
                int tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
    for(int i=0;i<n;++i) printf("%d ",a[i]);
}
