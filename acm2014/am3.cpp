#include<bits/stdc++.h>
using namespace std;

int h[500][10][500];
char s[20000];

int main() {
	for(int i=0;i<500;i++)
	for(int j=0;j<10;j++)
	for(int k=0;k<500;k++)
		h[i][j][k] = -1;
	
	scanf("%s",s);
	int q,m,l;
	scanf("%d",&q);
	long long ans,temp,temp1;
	int le = strlen(s);
		/*for(int i=0;i<le;i++) {
                        temp = (int(s[i]-'0'));
			for(int k=1;k<500;k++)
				h[k][temp] = temp%k;
                        for(int j=i+1;j<le;j++) {
                                temp = (temp*10+int(s[j]-'0'));
				
				for(int k=1;k<500;k++)
                                	h[k][int(s[j]-'0')] = temp%k;
                                //if(temp==l) ans++;
                        }
                }*/
		/*
		for(int i=1;i<500;i++) {
			for(int j=0;j<10;j++) {
				for(int k=1;k<500;k++) {
					h[i][j][k] = (i*10+j)%k;
				}
			}
		}*/
	int a,b;
	a=b=0;
	
	while(q--) {
		scanf("%d%d",&m,&l);
		ans = 0;
		for(int i=0;i<le;i++) {
                        temp = (int(s[i]-'0'))%m;
                        if(temp==l) ans++;
                        for(int j=i+1;j<le;j++) {
				if(h[temp][int(s[j]-'0')][m] == -1) {
				temp1 = (temp*10 + int(s[j]-'0'))%m;
				h[temp][int(s[j]-'0')][m] = temp1;
				temp = temp1;
				//a++;
				}
                                else {
				temp = h[temp][int(s[j]-'0')][m];
				//b++;
				}
                                if(temp==l) ans++;
                        }
                }

		
		//printf("%lld %d %d\n",ans,a,b);
		printf("%lld\n",ans);
	}
	return 0;

}
