#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[105];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=n-1;i>=0;i--){
		printf("%d ", a[i]);
	}
}
