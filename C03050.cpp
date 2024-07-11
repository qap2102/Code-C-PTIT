#include<stdio.h>
int n,a,b,c[100005];
int res(){
    for(int i=1;i<=n-1;i++)
        if (c[i]==n-1) return 1;
    return 0;
}

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n-1;i++){
        scanf("%d%d",&a,&b);
        c[a]++;
        c[b]++;
    }
    printf("%s",(res()?"Yes":"No"));
}
