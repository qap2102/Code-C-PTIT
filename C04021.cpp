#include<stdio.h>
#include<math.h>
int main(){
		int n;
		scanf("%d", &n);
		int a[105];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int x;
		scanf("%d", &x);
		x%=n;
		for(int i=n;i<n*2;i++) a[i]=a[i-n];
		for(int i=n-x;i<2*n-x;i++) printf("%d ", a[i]);
	
}
