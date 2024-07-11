#include<stdio.h>
int main(){
	int n; scanf("%d", &n);
	int a=(((n/2)+1)/2-1);
	for(int i=1;i<=n;i++){
		if(i<=(((n/2)+1)/2-1)){
			for(int j=1;j<=n;j++){
				if(((j<=(((n/2)+1)/2-i))||(j>n-(((n/2)+1)/2-i)))||(((n/2)+1-((((n/2)+1)/2-1)-i)-1)<j&&j<((n/2)+1+((((n/2)+1)/2-1)-i)+1))){
					printf("   ");
			}
				else printf("*  ");
			}
			printf("\n");
		}
		else if((a)<i&&i<=(n-n/2)){
			for(int j=1;j<=n;j++){
				printf("*  ");
			}
			printf("\n");
		}
		else {
			for(int j=1;j<=n;j++){
				if(i-n/2-1<j&&j<=n-i+n/2+1){
					printf("*  ");
				}
				else printf("   ");
			}
			printf("\n");
		}
	}
	printf("\n");
    for(int i=0; i<n/2-2; i++) printf("   ");
}
