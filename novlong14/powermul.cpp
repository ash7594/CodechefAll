#include<bits/stdc++.h>
#define maxv 500
using namespace std;

long long a[maxv+1][maxv+1] = {0};

long long mult(int n,long long m) {
	long long res=1;
	for(int i=0;i<n;i++)
		res=(res*n)%m;
	return res;
}

void initial() {
	for(int j=2;j<=maxv;j++) {
		int n=j;
		while(n%2 == 0) {
        		n = n/2;
			a[j][2]++;
    		}
    		for(int i=3;i<=sqrt(n);i=i+2) {
        		while(n%i == 0) {
            			n = n/i;
				a[j][i]++;
        		}
    		}
    		if(n>2)
        		a[j][n]++;
		for(int i=2;i<=maxv;i++)
			a[j][i] *= j;
	}

	/*for(int i=1;i<=maxv;i++) {
		for(int j=1;j<=maxv;j++)
			cout<<a[i][j]<<"\t";
		cout<<endl;
	}
	cout<<endl;
	*/
	long long te = 0;
	for(int i=2;i<=maxv;i++) {
		te = a[2][i];
		for(int j=3;j<=maxv;j++) {
			a[j][i] += te;
			te = a[j][i];
		}
	}
	/*
	for(int i=1;i<=maxv;i++) {
                for(int j=1;j<=maxv;j++)
                        cout<<a[i][j]<<"\t";
                cout<<endl;
        }*/ 

}

int main() {
	initial();
	int t;
	long long n,m,q,r,res;
	cin>>t;
	while(t--) {
		cin>>n>>m>>q;
		for(int i=0;i<q;i++) {
			res = 1;
			cin>>r;
			for(int i=2;i<=n;i++) {
				if(a[n][i]-a[r][i]-a[n-r][i] == 0)
					continue;
				res=res* pow(i,a[n][i]-a[r][i]-a[n-r][i]);
			}
			cout<<res%m<<endl;
		}
	}
	return 0;
}
