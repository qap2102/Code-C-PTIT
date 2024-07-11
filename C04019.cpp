#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int max=0;
		int n;
		scanf("%d", &n);
		int a[105];
		int b[30005];
		for(int i=0;i<=n;i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
			if(max<b[a[i]]) max=b[a[i]];
		}
		for(int i=0;i<=n;i++){
			if(b[a[i]]==max){
				printf("%d ", a[i]);
				b[a[i]]=0;
			}
			else b[a[i]]=0;
		}
		printf("\n");
	}
}
