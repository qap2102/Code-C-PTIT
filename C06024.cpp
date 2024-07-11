#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void swap(char *a, char *b){
	char t = *a;
	*a = *b;
	*b = t;
}
void latnguoc(char *c){
	int l=0, r=strlen(c)-1;
	while(l<r){
		swap(&c[l], &c[r]);
		l++;
		r--;
	}
}
char *cong(char *s1, char *s2){
	static char res[505];
	int i=strlen(s1)-1, j=strlen(s2)-1;
	int n=0, nho=0;
	while(i>=0||j>=0||nho>0){
		int s=nho;
		if(i>=0) s+=s1[i--]-'0';
		if(j>=0) s+=s2[j--]-'0';
		res[n++] = s%10+'0';
		nho=s/10;
	}
	res[n]='\0';
	latnguoc(res);
	return res;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[505], d[505];
		scanf("%s %s", c, d);
		printf("%s\n", cong(c,d));
	}
}

