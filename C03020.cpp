#include<stdio.h>
#include<math.h>
#include<limits.h>
 
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
 
int t,a,b,c;

int res(int n){
    int n1=n;
    int s=0;
    int a,b=0,p=0;
    while(n1>0){
        a=n1%10;
        if (a==6) b=1;
        s=s*10+a;
        p+=a;
        n1/=10;
    }
    return s==n&&p%10==8&&b;
}

int main(){
    scanf("%d%d",&a,&b);
    if (a>b){
        c=a;
        a=b;
        b=c;
    }
    foru(i,a,b)
        if (res(i)) printf("%d ",i);
}
