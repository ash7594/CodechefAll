#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	ll l,d,s,c;
	cin>>t;
	while(t--) {
		cin>>l>>d>>s>>c;
		if(l>(s*pow(c+1,d-1)))
			cout<<"DEAD AND ROTTING\n";
		else
			cout<<"ALIVE AND KICKING\n";
	}
	return 0;
}
