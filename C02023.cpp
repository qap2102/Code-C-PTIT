#include <stdio.h>
int max(int a, int b){
	return a>b ? a:b;
}
int main(){
	int n, m;
	scanf ("%d%d", &n, &m);
	for (int i=1;i<=n;i++){
		int p=max(n, m);
		for (int j=1;j<=m;j++){
			if (j<i) printf ("%c", 96+p--);
			else printf ("%c", 96+p);
		}
		printf ("\n");
	}
}
