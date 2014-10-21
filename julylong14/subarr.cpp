#include<stdio.h>
long long val=0;

int main() {
	long long n,t,temp;
	scanf("%lld",&t);
	while(t--) {
		temp=0;
		val=0;
		scanf("%lld",&n);
		char a[n];
		//for(int i=0;i<n;i++) {
			scanf("%s",a);
		//}
		for(int i=0;i<n;i++)
			if(a[i]=='1') {
				val++;
				val+=temp;
				temp++;
				//compute(a,n,i+1);
			}
		//if(a[n-1]=='1') val++;
		printf("%lld\n",val);
	}
	return 0;
}

