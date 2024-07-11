#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
void chuanhoa(char c[]){
	c[0]=toupper(c[0]);
	for(int i=1;i<strlen(c)-1;i++){
		c[i]=tolower(c[i]);
	}
}
void chuanhoa2(char c[]){
	for(int i=0;i<strlen(c)-1;i++){
		c[i]=toupper(c[i]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1000];
		gets(c);
		char a[20][50];
		int n=0;
		char *token = strtok(c, " ");
		while(token!=NULL){
			chuanhoa(token);
			strcpy(a[n++], token);
			token=strtok(NULL, " ");
		}
		chuanhoa2(a[0]);
		printf("%s", a[1]);
		for(int i=2;i<n-2;i++){
			printf(" %s", a[i]);
			printf(", %s\n", a[0]);
		}
	}
}
