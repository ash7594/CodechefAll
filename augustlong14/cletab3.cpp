#include<iostream>
using namespace std;

int main() {
	int m,n,t,val,z,temp;
	cin>>t;
	while(t--) {
		temp=0;
		z=0;
		val=0;
		cin>>n>>m;
		int a[m];
		int b[401]={0};
		int b2[n];
		
		for(int i=0;i<m;i++)
			cin>>a[i];
		for(int i=0;val<n && i<m;i++,z++) {
			if(b[a[i]]==0) {
				b[a[i]]=1;
				val++;
			}
		}
		while(z<m) {
		temp=0;
		int b3[401]={0};
		for(int i=z,j=0;i<m && j<n;i++,z++) {
			if(b3[a[i]]==0) {
				b3[a[i]]=1;
				b2[j]=a[i];
				j++;
				temp++;
			}
		}
		for(int i=0;i<temp;i++) {
			if(b[b2[i]]==0) {
				val++;
			}
		}
		for(int i=0;i<401;i++)
			b[i]=0;
		for(int i=0;i<temp;i++) {
			b[b2[i]]=1;
		}
		}
		cout<<val<<endl;

	}
	return 0;

}
