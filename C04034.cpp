#include<stdio.h>
#include<math.h>
int t, n, a[1005], b[1005], cnt;
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		b[0]=a[n-1];
		cnt=1;
		for(int i=n-2;i>=0;i--){
			if(a[i]>b[cnt-1]) b[cnt++]=a[i];
		}
		for(int i=cnt-1;i>=0;i--) printf("%d ", b[i]);
		printf("\n");
	}
}
