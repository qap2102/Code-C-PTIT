#include<stdio.h>
#include<math.h>
int t,a,b,c,d;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        printf("%s\n",(c-a==d-b?"YES":"NO"));
    }
    }
