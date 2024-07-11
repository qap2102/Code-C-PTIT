#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int palin(char c[505]){
	for(int i=0;i<strlen(c);i++){
		if(c[i]!=c[strlen(c)-i-1]){
			return 0;
		}
	}
	return 1;
}
int nt(char c[505]){
	for(int i=0;i<strlen(c);i++){
		if(c[i]!='2'&&c[i]!='3'&&c[i]!='5'&&c[i]!='7'){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[505];
		scanf("%s", &c);
		printf("%s\n", (palin(c)&&nt(c)?"YES":"NO"));
	}
}
