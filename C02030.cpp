#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d", &n);
	char a;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i*2-1;j+=2) printf("%c",'@'+j-1);
        for(int j=i*2-3;j>=1;j-=2) printf("%c",'@'+j-1);
        printf("\n");
	}
}
