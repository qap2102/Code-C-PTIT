#include<stdio.h>
#include<math.h>
 
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ll long long
 
int n,a[15][15];

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    scanf("%d",&n);
    a[1][1]=1;
    foru(i,2,n){
        a[i][1]=1;
        foru(j,2,i-1) a[i][j]=a[i-1][j]+a[i-1][j-1];
        a[i][i]=1;
    }
    foru(i,1,n){
        foru(j,1,i) printf("%d ",a[i][j]);
        printf("\n");
    }
}
