#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	cin>>t;
	while(t--) {
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
			if(a[i]%2==0) k--;
		}
		if(k<1 && k!=(-1*n))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
