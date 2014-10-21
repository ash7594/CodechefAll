#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m,val;
	cin>>t;
	while(t--) {
		cin>>n>>m;
		int b[401] = {0};
		int b2[401] = {0};
		int a[m];
		for(int i=0;i<m;i++)
			cin>>a[i];
		for(int i=0;i<m;i++) {
			for(int j=0;j<n;j++) {
				b[a[i]] = 1;
			}
		}
	}

	return 0;
}
