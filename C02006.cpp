#include <stdio.h>
int main(){
	int a, b;
	scanf ("%d%d", &a, &b);
	for (int i=1;i<=b;i++){
		printf ("*");
	}
	if (a>1){
		printf ("\n");
		for (int i=2;i<a;i++){
			for (int j=1;j<i;j++){
				printf ("~");
			}
			printf ("*");
			for (int j=2;j<b;j++){
				printf (".");
			}
			if (b>1){
				printf ("*");
			}
			printf ("\n");
		}
		for (int i=1;i<a;i++){
			printf ("~");
		}
		for (int i=1;i<=b;i++){
			printf ("*");
		}
	}
}
