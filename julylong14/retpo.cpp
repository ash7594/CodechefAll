#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int t,val;
	long long x,y;
	cin>>t;
	while(t--) {
		val=0;
		cin>>x>>y;
		x=abs(x);
		y=abs(y);
		if(x<y) {
			val+=x*2;
			val+=3*(y-x);
		} else if(x>y) {
			val+=y*2;
			val+=3*(x-y);
		} else {
			val+=x*2;
		}
		cout<<val<<endl;
	}
	return 0;
}
