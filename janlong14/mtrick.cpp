#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t,n,a,b,c,l[1001],k;
	char ch;
	cin>>t;
	while(t--) {
		scanf("%lld",&n);
		for(ll i=0;i<n;i++)
			scanf("%lld",&l[i]);
		scanf("%lld%lld%lld",&a,&b,&c);
		b%=c;
		for(ll i=0;i<n;i++) {
			cin>>ch;
			switch(ch) {
				case 'R':
					for(ll j=i,z=n-1;j<i+(n-i)/2;j++,z--){
						k = l[j];
						l[j] = l[z];
						l[z] = k;
					}
					break;
				case 'A':
					for(ll j=i;j<n;j++) {
						l[j]+=a;
					}
				 	break;
				case 'M':
					for(ll j=i;j<n;j++) {
                                                l[j]*=b;
                                        }
                                        break;
			}
			for(ll j=i;j<n;j++)
                        	l[j]%=c;
			printf("%lld ",l[i]);
		}
		cout<<endl;
	}
	return 0;
}
