#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char* chuyen(char c[]){
	for(int i=0;i<strlen(c);i++){
		if(c[i]>='A'&&c[i]<='Z'){
			c[i]+=32;
		}
	}
	return c;
}
int main(){
	char c[1000];
	gets(c);
	chuyen(c);
	char a[20][50];
	int n=0;
	char* tok = strtok(c, " ");
	while(tok!=NULL){
		strcpy(a[n], tok);
		++n;
		tok = strtok(NULL, " ");
	}
	int b[n]={0};
	for(int i=0;i<n;i++){
		if(b[i]==0){
			int cnt=1;
			for(int j=i+1;j<n;j++){
				if(strcmp(a[i], a[j])==0){
					++cnt;
					b[j]=1;
				}
			}
			printf("%s %d\n", a[i], cnt);
		}
	}
}
