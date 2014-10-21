#include<bits/stdc++.h>
using namespace std;

int main() {
	long long t,n,m;
	cin>>t;
	long long val;
	int z;
	while(t--) {
		val=0;
		z=0;
		cin>>n>>m;
		int a[m];
		int b[401]={0};
		for(int i=0;i<m;i++)
			cin>>a[i];
		for(int i=0;i<m && val<n;i++,z++) {
			if(b[a[i]]!=1) {
				b[a[i]]=1;
				val++;
			}
		}
		for(int i=z;i<m;i++) {
			int b2[401] = {0};
			for(int j=i-1,k=0;k<(2*n-1) && j>=0;j--,k++)	{
				if(a[i]==a[j]) {
					goto h;
				} else if(b2[a[j]]==1) {
					k--;
				} else {
					b2[a[j]]=1;
				}
			}
			val++;
			h:;	
		}
		cout<<val<<endl;
	}
	return 0;
}
