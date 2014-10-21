#include<iostream>
using namespace std;

int main() {
	int t,n,val;
	cin>>t;
	while(t--) {
		val = 0;
		cin>>n;
		int a[n];
		int b[100001] = {0};
		for(int i=0;i<n;i++) {
			cin>>a[i];
			if(b[a[i]]==0) {
				val++;
				b[a[i]] = 1;
			}
		}
		cout<<val<<endl;
	}
	return 0;
}
