#include<bits/stdc++.h>
#define maxe 10000
#define mine(a,b) ((a<b)?a:b)
int n,m,x,y;
int val=2*maxe;
char a[maxe][maxe] = {0};

void solve(int x,int num,int res) {
	if(res>=val)
		return;
	if(a[x][n] != '0') {
		val = mine(res,val);
		return;
 	}
	else if(a[n][x] != '0') {
		res++;
		val = mine(res,val);
		return;
	}
	
	if(num>n)
		return;

	for(int i=0;i<n;i++) {
		if(a[x][i] != '0') {
			solve(i,num+1,res);
		}
		else if(a[i][x] != '0') {
			solve(i,num+1,res+1);
		}
	}
}

int main() {
	scanf("%d%d",&n,&m);
	
	for(int i=0;i<m;i++) {
		scanf("%d%d",&x,&y);
		if(x!=y) a[x][y] = '1';
	}
	
	solve(1,0,0);
	
	if(val==2*maxe)
		val=-1;
	printf("%d",val);
	return 0;
}
