#include <stdio.h>
#include <math.h>
int nt(int n){
	if (n<2) return 0;
	else {
		for (int i=2;i<=sqrt(n);i++){
			if (n%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int palin(int n){
    int n1=n,s=0;
    while(n>0){
        s=s*10+n%10;
        n/=10;
    }
    return s==n1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    	int a, b;
        scanf("%d%d",&a,&b);
        int cnt=0;
        for(int i=a;i<=b;++i)
            if (nt(i)&&palin(i)){
                printf("%d ",i);
                cnt++;
                if (cnt==10){
                    cnt=0;
                    printf("\n");
                }
            }
        printf("\n\n");
    }
}
