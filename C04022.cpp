#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[105];
	int max1=INT_MIN;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(max1<a[i]) max1=a[i];
	}
	int max2=INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i]<max1&&max2<a[i]) max2=a[i];
	}
	printf("%d %d", max1, max2);
}
