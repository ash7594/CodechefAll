#include<iostream>
#include<stdio.h>
using namespace std;

int fact(int i) {
	if(i==1)
		return 1;
	return (i*fact(i-1));
}

int main() {
	int n,one=0,val=0;
	cin>>n;
	char a[n][n];
	for(int i=0;i<n;i++)
		scanf("%s",a[i]);
	for(int i=0;i<n;i++) {
		one=0;
		for(int j=0;j<n;j++) {
			if(a[j][i] == '1')
				one++;
		}
		if(one>1)
			val += fact(one);
	}
	cout<<val<<endl;
	return 0;
}
