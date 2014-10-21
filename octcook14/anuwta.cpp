#include<bits/stdc++.h>
using namespace std;

int main() {
	long long t,n;
	long long res;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);
		res = n + n*(n+1)/2;
		printf("%lld\n",res);
	}

	return 0;
}
