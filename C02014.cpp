#include<stdio.h>
#include<math.h>
int n,i,j;
int main(){
    scanf("%d",&n);
    for(i=-n+1;i<=n-1;++i){
        for(j=-n+1;j<=n-1;++j)
            if (abs(i)>abs(j)) printf("%d",abs(i)+1);
            else printf("%d",abs(j)+1);
        printf("\n");
    }

}
