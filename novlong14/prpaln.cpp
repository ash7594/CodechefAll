#include<bits/stdc++.h>
using namespace std;

char a[100001];
int dif;

void yoyo(int i,int j,int l) {
	for(;i<=l/2;i++,j--) {
		if(a[i] != a[j]) {
			dif++;
			return;
		}
	}
}

int main() {
	int t;
	char c;
	cin>>t;
	while(t--) {
		cin>>a;
		dif = 0;
		int l = strlen(a);
		c = a[0];
		for(int i=0,j=l-1;i<=l/2;i++,j--) {
			if(dif == 0 && a[i] != a[j]) {
				dif = 1;
				yoyo(i,j-1,l);
				yoyo(i+1,j,l);
				if(dif == 3) cout<<"NO\n";
				else cout<<"YES\n";
				goto next;
			}
		}
		cout<<"YES\n";
		next:;
	}
	return 0;
}
