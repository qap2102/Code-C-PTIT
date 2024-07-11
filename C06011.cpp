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
int tong(char c[505]){
	int s=0;
	for(int i=0;i<strlen(c);i++){
		s+=(c[i]-'0');
	}
	return s%10==0;
}
int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[505];
		scanf("%s", &c);
		printf("%s\n", (c[strlen(c)-1]=='8'&&palin(c)&&tong(c)?"YES":"NO"));
	}
}
