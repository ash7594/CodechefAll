#include<stdio.h>
using namespace std;

char oddeven(long long int a) {
	if(a%2 == 0)
		return 1;
	else return 0;
}

int main() {

	int t;
	scanf("%d",&t);
	long long int m,n;
	char a,b;

	while(t--) {
		scanf("%lld%lld",&n,&m);
		a=oddeven(n);
		b=oddeven(m);

		if(a==0 && b==0) {
			printf("%lld/%lld\n",(n/2+1)*(m/2) + (m/2+1)*(n/2),m*n);
		}
		else printf("1/2\n");
	}
return 0;
}
