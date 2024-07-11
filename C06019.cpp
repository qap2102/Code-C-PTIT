#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char chuanhoa(char s[]){
	for(int i=0;i<strlen(s);i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
		char c[1000];
		gets(c);
		chuanhoa(c);
		char a[10][100];
		int n=0;
		char *token = strtok(c, " ");
		while(token!=NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		for(int i=0;i<n-1;i++){
			printf("%c", a[i][0]);
		}
		printf("%s@ptit.edu.vn\n", a[n-1]);
	}
