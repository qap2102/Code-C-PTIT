#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int gcd(int a, int b){
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a, b;
		cin>>a>>b;
		cout<<gcd(a,b)<<endl;
	}
}
