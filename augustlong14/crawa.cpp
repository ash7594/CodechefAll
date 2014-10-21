#include<bits/stdc++.h>

int main() {
	int t;
	scanf("%d",&t);
	long long x,y;
	while(t--) {
	  	scanf("%lld%lld",&x,&y);
		if(x>0 && x%2==1 && y>=((1-x)) && y<=(x+1))
					{printf("YES\n");continue;}
		else if(x<0 && x%2==0 && y>=x && y<=(0-x))
					{printf("YES\n");continue;}
		if(y>0 && y%2==0 && x>=(0-y) && x<=(y-1))
					{printf("YES\n");continue;}
		else if(y<=0 && y%2==0 && x>=y && x<=(1-y))
					{printf("YES\n");continue;}
		printf("NO\n");
	}
	return 0;
}
