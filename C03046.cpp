#include<stdio.h>
#include<math.h>
int t,n,a,b,i;
int check(int n){
    int n1=n,s1=0,s2=0,a;
    while(n>0){
        a=n%10;
        if (a==4) return 0;
        s1=s1*10+a;
        s2+=a;
        n/=10;
    }
    return s1==n1&&s2%10==0;
}

int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        a=(int)pow(10,n-1);
        b=(int)pow(10,n)-1;
        for(i=a;i<=b;++i)
            if (check(i)) printf("%d ",i);
        printf("\n");
    }
}
