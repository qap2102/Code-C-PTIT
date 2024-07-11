#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[35];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int dem=0;
		int ans=0;
		for(int i=1;i<n;i++){
			if(a[i]==a[i-1]) dem++;
			else {
				ans+=dem;
				dem=0;
			}
					}
		ans+=dem;
		printf("%d\n", ans);			
	}
}
