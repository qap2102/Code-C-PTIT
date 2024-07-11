#include<stdio.h>
#include<math.h>
int a,b;
int tongcs(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

int main(){
    scanf("%d%d",&a,&b);
    if(tongcs(a)<=tongcs(b)) printf("%d %d",a,b);
    else printf("%d %d",b,a);
}
