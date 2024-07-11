#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n;
	char a[105],b[105],s[105]="",*p,*q;
    gets(a);
    gets(b);
    n=strlen(b);
    q=a;
    while((p=strstr(q,b))!=NULL){
        strncat(s,q,p-q);
        q=p+n;
    }
    strcat(s,q);
    printf("%s",s);
}
