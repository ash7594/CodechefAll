#include<iostream>
using namespace std;

int main() {
	long long n,m,a,val;
	cin>>n;
	cin>>m;
	while(m--) {
		val=0;
		cin>>a;
		if(a<=(n+1)) {
		}
		else if(a<=(2*n+1)) {
			val=a-(n+2)+1;
		} else {
			val=3*n-a+1;
		}
		cout<<val<<endl;
	}
	return 0;
}
