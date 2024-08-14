#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int palin(int n){
	int m=n, s=0;
	while(n>0){
		s=s*10+n%10;
		n/=10;
	}
	return s==m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		int cnt=0;
		for(int i=a;i<=b;i++){
			if(nt(i)&&palin(i)){
				cout<<i<<" ";
				cnt++;
				if(cnt==10){
					cnt=0;
					cout<<endl;
				}
			}
		}
		cout<<endl;
	}
}
