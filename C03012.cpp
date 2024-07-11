#include <stdio.h> 
int fb (int n){
    if (n==1||n==0) return n;
    int f1=1,f2=0 ,x=0 ;
    for (int i=1;i<=n;i++){
        x = f1+f2;
        if (x==n) return 1;
        f2=f1;
        f1=x;
    }
    return 0;
}
int main(){
	int n;
	scanf ("%d", &n);
	if (fb(n)) printf ("1");
	else printf ("0");
}
