#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s=0;
		while(n>0){
			s+=n%10;
			n/=10;
		}
		cout<<s<<endl;
	}
}
