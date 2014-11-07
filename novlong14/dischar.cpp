#include<bits/stdc++.h>
using namespace std;

char s[100001];

int main() {
	int t;
	int res;
	cin>>t;
	while(t--) {
		int a[26] = {0};
		res = 0;
		cin>>s;
		for(int i=0;s[i]!='\0';i++) {
			if(a[s[i]-'a']==0) {
				res++;
				a[s[i]-'a']++;
			}
		}
		cout<<res<<endl;	
	}
	return 0;
}
