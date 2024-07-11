#include<stdio.h>
#include<math.h>
int t,n,a,b[2];
char x;
int main(){
    scanf("%d",&t);
    while(t--){
        b[0]=0;
        b[1]=0;
        n=0;
        while(scanf("%d",&a)!=-1){
            b[a%2]++;
            n++;
            scanf("%c",&x);
            if (x=='\n') break;
        }
        printf("%s\n",((b[0]>b[1]&&n%2==0)||(b[0]<b[1]&&n%2==1)?"YES":"NO"));
    }
}
