#include<stdio.h>
int val,m,n,resu;

void calc(int a[],int b[],int z,int res) {
	if(z>=m) {
		if(resu==-1)
			resu=res;
		else if(resu>res) 
			resu=res;
		return;
	}

	if(b[a[z]]==1)
		calc(a,b,z+1,res);
	else {
		if(resu!=-1 && resu<=(res+1))
			return;
		for(int i=0,j=0;i<401 && j<n;i++) {
			if(b[i]==1) {
				b[i]=0;
				b[a[z]]=1;
				calc(a,b,z+1,res+1);
				b[a[z]]=0;
				b[i]=1;
				j++;
			}
		}
	}
}

int main() {
	int t,z;
	scanf("%d",&t);
	while(t--) {
		z=0;
		val=0;
		resu=-1;
		scanf("%d%d",&n,&m);
		int a[m];
		int b[401]={0};	

		for(int i=0;i<m;i++)
			scanf("%d",&a[i]);
		for(int i=0;val<n && i<m;i++,z++) {
			if(b[a[i]]==0) {
				b[a[i]]=1;
				val++;
			}
		}

		calc(a,b,z,val);
		printf("%d\n",resu);

	}
	return 0;

}
