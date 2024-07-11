#include<stdio.h>
#include<math.h>
int a[4],b[4];
int main(){
	long long n;
    scanf("%lld",&n);
    long long s=0;
    while(n>0){
        s=s*10+n%10;
        n/=10;
    }
    n=s;
    int cnt=0;
    while(n>0){
        int c=n%10;
        if (c==2||c==3||c==5||c==7){
            int kt=0;
            for(int i=0;i<cnt;++i)
                if (a[i]==c){
                    kt=1;
                    b[i]++;
                }
            if (!kt){
                a[cnt]=c;
                b[cnt]=1;
                cnt++;
            }
        }
        n/=10;
    }
    for(int i=0;i<cnt;++i) printf("%d %d\n",a[i],b[i]);
}
