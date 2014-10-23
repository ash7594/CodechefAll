#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct val {
	ll s;
	ll f;
	ll p;
};

val a[100001];

bool acompare1(val l, val r) {return l.p < r.p; }
bool acompare2(val l, val r) {return l.f < r.f; }

int main() {
	ll t,n,k,j,c,temp,temp2;
	scanf("%lld",&t);
	while(t--) {
		c=0;
		scanf("%lld%lld",&n,&k);
		//cout<<n<<" "<<k;
		for(ll i=0;i<n;i++) {
			scanf("%lld%lld%lld",&a[i].s,&a[i].f,&a[i].p);
		}
		//cout<<a[0].s<<" "<<a[0].f<<" "<<a[0].p;
		std::sort(a,a+n,acompare1);
		for(ll i=0;i<n;i++) {
			temp = a[i].p;
			for(j=i+1;j<n && a[j].p==temp;j++);
			j-=i;
			if(j>1)
				std::sort(&a[i],&a[i]+j,acompare2);
			c++;
			temp2 = a[i].f;
			i++;
			while(--j) {
				if(a[i].s >= temp2) {
					c++;temp2 = a[i].f;
				}
				i++;
			}
			i--;
		}
		printf("%lld\n",c);
	}
	return 0;
}
