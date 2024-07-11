#include<stdio.h>
#include<math.h>
int a[105], b[105];
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d%d", &a[i], &b[i]);
	int ans=a[0]+b[0];
	for(int i=1;i<=n;i++){
		if(ans>a[i]) ans+=b[i];
		else ans=a[i]+b[i];
	}
	printf("%d", ans);
}
