#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct sorted {
	long long d;
	int f;
};

long long t,n,val,temp2[10000001],z;
sorted temp[100001];

void bsearch(long long ele) {
	ll beg = 0;
	ll end = val-1;
	ll mid;
	while(beg<=end) {
		mid = (beg+end)/2;
		if(temp[mid].d > ele) {
			end = mid-1;
		} else if(temp[mid].d < ele) {
                        beg = mid+1;
                } else if(temp[mid].f != -1){
			temp[mid].f = -1;
			return;
		} else {
			ll a1 = mid-1;
			ll a2 = mid+1;
			if(a1>=0 && a1<val) {
			while(temp[a1].d==temp[mid].d) {
				if(temp[a1].f != -1) {
					temp[a1].f = -1;
					return;
				}
				a1--;
				if(a1<0) break;
			}}
			if(a2<val && a2>=0) {
			while(temp[a2].d==temp[mid].d) {
                                if(temp[a2].f != -1) {
                                        temp[a2].f = -1;
                                        return;
                                }
                                a2++;
				if(a2>=val) break;
                        }}
			return;
		}
	}
}

bool acompare(sorted lhs, sorted rhs) { return lhs.d < rhs.d; }

int main() {
	long long z2;
	cin>>t;
	while(t--) {
		z = -1;
		cin>>n;
		val = pow(2,n);
		//cout<<val<<endl;
		for(long long i=0;i<val;i++) {
			cin>>temp[i].d;
			temp[i].f = 0;
		}
		std::sort(temp,temp+val,acompare);
		temp2[++z] = temp[1].d;
		cout<<temp[1].d<<" ";
		//cout<<"yo\n";
		for(long long i=2;i<val;i++) {
			if(temp[i].f == -1) continue;
			cout<<temp[i].d<<" ";
			z2 = z;
			for(long long j=0;j<=z2;j++) {
				temp2[++z] = temp[i].d+temp2[j];
				bsearch(temp2[z]);
			}
		}
		cout<<endl;
	}	
	return 0;
}
