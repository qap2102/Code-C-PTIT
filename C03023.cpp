#include<stdio.h>
#include<math.h>
int palin(int n){
    int s=0,n1=n,a;
    while(n>0){
        a=n%10;
        if (a==9) return 0;
        s=s*10+a;
        n/=10;
    }
    return s==n1;
}
int main(){
	int n;
	scanf("%d", &n);
	int ans=0;
	for(int i=2;i<=n-1;i++){
		if(palin(i)){
			printf("%d ",i);
			ans++;
		}
	}
	printf("\n%d", ans);
}
