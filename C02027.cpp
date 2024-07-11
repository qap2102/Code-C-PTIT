#include<stdio.h>
#include<math.h>
int n,i,j;
char a,b;
int main(){
    scanf("%d",&n);
    a='a';
    for(i=1;i<=n;++i){
        if (i%2==1)
            for(j=1;j<=i;++j) printf("%c ",a++);
        else{
            b=a+i-1;
            for(j=b;j>=a;--j) printf("%c ",j);
            a=b+1;
        }
        printf("\n");
    }
}
