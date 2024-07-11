#include<stdio.h>
#include<math.h>
int prime[1000001];
void sang(){
	for(int i=0;i<=1000000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2;i<=1000;i++){
		if(prime[i]){
			//duyet tat ca cac boi so cua i va cho no khong phai so nguyen to
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]=0;//j khong con la so nguyen to nua
			}
		}
	}
}
int sum(int n)
{
    int s = 0;
    while (n != 1)
    {
        s += prime[n];
        n /= prime[n];
    }
    return s;
}

int main()
{
    sang();
    int n;
    scanf("%d", &n);
    long long s = 0;
    while (n--)
    {
        int x;
        scanf("%d", &x);
        s += sum(x);
    }
    printf("%lld", s);
}
