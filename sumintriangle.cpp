#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	
	int n,l;
	scanf("%d",&n);

	while(n) {
		scanf("%d",&l);
		int a[l][l]={0};
		for(int i=0;i<l;i++)
		for(int j=0;j<l;j++)
			scanf("%d",&a[i][j]);
		calc(l,a[l][l]);
	}
	
	return 0;
}
