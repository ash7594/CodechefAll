#include<bits/stdc++.h>
#define maxf(a,b) ((a>b)?a:b)
#define minf(a,b) ((a<b)?a:b)
using namespace std;

int main() {
	long long t,n,m,minv,maxv,temp;
	cin>>t;
	while(t--) {
		cin>>n>>m;
		minv = 10000000;
		maxv = -1;
		for(int i=0;i<m;i++) {
			cin>>temp;
			minv = minf(minv,temp);
			maxv = maxf(maxv,temp);
		}
		for(int i=0;i<n;i++) {
			cout<<maxf(abs(maxv-i),abs(minv-i))<<" ";
		}
		cout<<endl;
	}
	return 0;
}
