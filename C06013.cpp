#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[1005];
		scanf("%s", &c);
		int a[10]={0};
		int cnt=0;
		int kt=1;
		if(c[0]=='0') printf("INVALID\n");
		else {
			for(int i=0;i<strlen(c);i++){
				if(c[i]>='0'&&c[i]<='9'){
					int b=c[i]-'0';
					if(a[b]==0){
						cnt++;
						a[b]++;
					}
				}
				else{
					kt=0;
					break;
				}
			}
			if(kt==0) printf("INVALID\n");
			else {
				if(cnt==10) printf("YES\n");
				else printf("NO\n");
			}
	}
}
}
