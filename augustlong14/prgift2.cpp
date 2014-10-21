#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k,m,maxe;
	cin>>t;
	while(t--) {
		m=0;maxe=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
			if(a[i]%2==0) m++;
			else m=0;
			if(maxe<m)
				maxe=m;
		}
		if(maxe>=k)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
