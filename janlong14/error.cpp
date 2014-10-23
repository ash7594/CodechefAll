#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	char a[100001];
	cin>>t;
	while(t--) {
		cin>>a;
		for(int i=2;a[i]!='\0';i++) {
			if(abs(a[i]-a[i-1])==1 && abs(a[i-2]-a[i-1])==1) {
				cout<<"Good\n";goto end;
			}
		}
		cout<<"Bad\n";
		end:;
	}
	return 0;
}
