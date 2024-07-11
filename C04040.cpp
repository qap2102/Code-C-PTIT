#include<stdio.h>
#include<math.h>
#include<limits.h>
#define ll long long
int main(){
	int t;
    scanf("%d",&t);
    while(t--){
    	int n;
        scanf("%d",&n);
        ll max=INT_MIN;
        ll a;
        ll s=0;
        for(int i=0;i<n;++i){
            scanf("%lld",&a);
            s+=a;
            if (max<s) max=s;
            if (s<0) s=0;
        }
        printf("%lld\n",max);
    }
}
