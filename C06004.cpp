#include<stdio.h>
#include<string.h>
int main(){
	int a,b,c;
	char s[505];
	gets(s);
	a=0;
	b=0;
	c=0;
	for(int i=0;i<strlen(s);i++){
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) a++;
		else if (s[i]>='0'&&s[i]<='9') b++;
		else c++;
	}
	printf("%d %d %d", a, b, c);
}
