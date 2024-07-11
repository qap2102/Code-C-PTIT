#include <stdio.h>
#include <math.h>
int nt(int n){
    int i;
    for(i=2;i*i<=n;++i)
        if (n%i==0) return 0;
    return n>1;
}
int number(int n){
    if (!nt(n)) return 0;
    while(n>0){
        if (!nt(n%10)) return 0;
        n/=10;
    }
    return 1;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int a,b;
		scanf("%d%d", &a, &b);
		int cnt=0;
		for(int i=a;i<=b;i++){
			if(number(i)){
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
}
