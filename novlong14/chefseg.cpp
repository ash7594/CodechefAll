#include<bits/stdc++.h>
using namespace std;

long long a[41];

int main() {
	for(long i=0;i<41;i++) {
		a[i] = pow(2,i);
		//cout<<a[i]<<endl;
	}
	int t,t1;
	long double x,k,t2;
	cin>>t;
	while(t--) {
		cin>>x>>k;
		for(int i=0;i<41;i++) {
			if(k<a[i]) {
				t1 = i;
				break;					
			}
		}
		cout.precision(20);
		cout<<(k-a[t1-1])*(x/a[t1-1])+(x/a[t1])<<endl;
	}
	return 0;
}
