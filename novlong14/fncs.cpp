#include<bits/stdc++.h>
#define arval 100001
#define getcx getchar_unlocked
using namespace std;

inline void inp(long long *n) {
        *n=0;
        int ch=getcx();
        while(!(ch>='0' && ch<='9'))
                ch=getcx();
        while(ch>='0' && ch<='9')
                *n=(*n<<3)+(*n<<1)+ch-'0',ch=getcx();
}

struct {
	

};

long long n,q;
long long a1[arval],a2[arval],a3[arval] = {0};
long long a[arval][3] = {0};

int main() {
	long long x,y,m,n,t,temp;
	inp(&n);
	for(int i=1;i<=n;i++)
		inp(&a1[i]);
	a1[0] = a2[0] = a3[0] = 0;
	
	for(int i=1;i<=n;i++) {
                a2[i] = a2[i-1] + a1[i];
                //cout<<a2[i]<<endl;
        }

	for(int i=1;i<=n;i++) {
		inp(&a[i][0]);
		inp(&a[i][1]);
		a[i][2] = a2[a[i][1]] - a2[a[i][0]-1];
		//cout<<a[i][2]<<endl;
	}
	
	for(int i=1;i<=n;i++)
                a3[i] = a3[i-1] + a[i][2];
	
	inp(&q);
	while(q--) {
		inp(&t);
		inp(&x);
		inp(&y);
		if(t==2) {
                	printf("%lld\n",(a3[y]-a3[x-1]));
			continue;
		}
			long long r = y - a1[x];
			temp = 0;
			for(int i=1;i<=n;i++) {
				if(a[i][0]<=x && a[i][1]>=x) {
					temp += r;
				}
				a3[i] += temp;
			}
			a1[x] = y;
	}
	
	return 0;
}
