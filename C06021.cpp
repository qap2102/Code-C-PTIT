#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char *res(char *c){
	int chan = 0 ;
	int le = 0;
	for(int i=0;i<strlen(c)-1;i++){
		if(c[i]<'0'||c[i]>'9') return "INVALID";
		else if(c[i]&1) le++;
		else chan++;
	}
	if(strlen(c)%2==1&&le>chan) return "YES";
	if(strlen(c)%2==0&&le<chan) return "YES";
	return "NO";
}
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char c[1005];
		scanf("%s", c);
		printf("%s\n", res(c));
	}
}
