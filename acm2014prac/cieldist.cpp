#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int d,d1,d2;
	while(t--) {
		cin>>d1>>d2>>d;
		int m = d-d1-d2;
		if(m<0) m=0;	
		cout<<m<<endl;
	}
	return 0;
}
