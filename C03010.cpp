#include <stdio.h>
int main(){
	int n, f[4]={1, 2, 145, 40585};
	scanf ("%d", &n);
	for (int i=0;i<4;i++){
		if (f[i]<n){
			printf ("%d ", f[i]);
		}
	}
}
