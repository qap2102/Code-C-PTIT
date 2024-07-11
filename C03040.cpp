#include<stdio.h>
#include<math.h>
int n;
int tongcs(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}

int tongts(int n){
    int i,s=0;
    for(i=2;i<=sqrt(n);i++)
        while(n%i==0){
            s+=tongcs(i);
            n/=i;
        }
    if (n>1) s+=tongcs(n);
    return s;
}

int main(){
    scanf("%d",&n);
    printf("%s",(tongcs(n)==tongts(n)?"YES":"NO"));
}
