#include<bits/stdc++.h>
using namespace std;

int main() {
int t,n;
int val = 0;
scanf("%d",&t);
while(t--) {
	val = 0;
	scanf("%d",&n);
	char a[n][n];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
	
	for(int i=n-1;i>=0;i--) {
		for(int j=n-1;j>=0;j--) {
			if(a[i][j]=='#')
				break;
			a[i][j] = ',';
		}
	}
	
	for(int j=n-1;j>=0;j--) {
		for(int i=n-1;i>=0;i--) {
			if(a[i][j]=='#')
				break;
			if(j==n-1 || (a[i][j+1]==',')) {
				val++;
				a[i][j] = ',';
			}
		}
	}
	printf("%d\n",val);
}

return 0;
}
