#include<stdio.h>
int t,n,a;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        while(n--){
            scanf("%d",&a);
            if (a%2==0) printf("%d ",a);
        }
        printf("\n");
    }
}
