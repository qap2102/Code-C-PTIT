#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
#define N 105

int t,n,c[10005],cnt,kt;
char s[10005],a[100][10005],b[100][10005],*tok;

int main(){
    gets(s);
    tok=strtok(s," ");
    n=0;// dem so luong tu trong xau a
    while(tok!=NULL){
        for(int i=0;i<strlen(tok)-1;i++){
        	tok[i]=tolower(tok[i]);
        	strcpy(a[n++],tok);
        	tok=strtok(NULL," ");
		}
    }
    strcpy(b[0],a[0]);
    c[0]=1;
    cnt=1; // dem so luong tu trong xau b
    for(int i=1;i<n-1;i++){
        kt=0;
        for(int j=0;j<cnt-1;j++)
            if (strcmp(a[i],b[j])==0){
                kt=1;
                c[j]++;
                break;
            }
        if (!kt){
            strcpy(b[cnt],a[i]);
            c[cnt]=1;
            cnt++;
        }
    }
    for(int i=0;i<cnt-1;i++) printf("%s %d\n",b[i],c[i]);
}
