#include<bits/stdc++.h>
using namespace std;

long long mult(int i) {
	return pow(i,i);
}

int main() {
	int t;
	long long n,m,q,r;
	cin>>t;
	while(t--) {
		cin>>n>>m>>q;
		long long a[n+1];
		a[1] = 1;
		for(int i=2;i<=n;i++)
			a[i] = (a[i-1]*mult(i));
		for(int i=0;i<q;i++) {
			cin>>r;
			cout<<(a[n]/(a[r]*a[n-r]))%m<<endl;
		}
	}
	return 0;
}
