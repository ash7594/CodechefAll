#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m,a,b;
	cin>>t;
	while(t--) {
		int d[101][101] = {0};
		cin>>n>>m;
		for(int i=1;i<=m;i++) {
			cin>>a>>b;
			d[a][b] = 1;
			d[b][a] = 1;
		}
		
		if(n%2!=0){cout<<"NO";continue;}

		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				
			}
		}
	}
	return 0;
}
