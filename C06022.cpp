#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int min(int a, int b){
	return a < b ? a : b;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	for(int i=1;i<=t;i++){
		char c[1000], a[100];
		gets(c);
		scanf("%s", a);
		getchar();
		printf("Test %d: ", i);
		char *token = strtok(c, " ");
		while(token!=NULL){
			if(strcmp(token, a)==0){
				printf("%s ", token);
			}
			token = strtok(NULL, " ");
		}
		printf("\n");
	}
}
