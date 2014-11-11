#include<bits/stdc++.h>
#define arval 100001
using namespace std;

long long n,q;
long long a1[arval],a2[arval],a3[arval];
long long a[arval][3];

int main() {
	long long x,y,m,n;
	int t;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
		scanf("%lld",&a1[i]);
	a1[0] = a2[0] = a3[0] = 0;
	
	for(int i=1;i<=n;i++) {
                a2[i] = a2[i-1] + a1[i];
                //cout<<a2[i]<<endl;
        }

	for(int i=1;i<=n;i++) {
		scanf("%lld %lld",&a[i][0],&a[i][1]);
		a[i][2] = a2[a[i][1]] - a2[a[i][0]-1];
		//cout<<a[i][2]<<endl;
	}
	
	for(int i=1;i<=n;i++)
                a3[i] = a3[i-1] + a[i][2];

	cin>>q;
	while(q--) {
		scanf("%d",&t);
		scanf("%lld %lld",&x,&y);
		if(t==2) {
                	printf("%lld\n",a3[y]-a3[x-1]);
			continue;
		}

			for(int i=1;i<=n;i++) {
				if(a[i][0]<=x && a[i][1]>=x) {
					a[i][2] = a[i][2] - a1[x] + y;
				}
			}
			
			a1[x] = y;
			a3[0] = 0;
			for(int i=1;i<=n;i++) {
                		a3[i] = a3[i-1] + a[i][2];
			}
	}
	
	return 0;
}
