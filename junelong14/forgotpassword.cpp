#include<stdio.h>
#include<string>

int main() {
	
	int t,j,m,i,n;
	scanf("%d",&t);
	char s[1000000];
	char dot = 0;
	char v;

	while(t--) {
		dot = 0;
		scanf("%d",&n);
		char a[n][2];
		for(i=0;i<n;i++) {
			scanf("%c%c%c%c",&v,&a[i][0],&v,&a[i][1]);
		}
		scanf("%s",s);
		for(j=0;s[j]!='\0';j++) {
		for(i=0;i<n;i++) {
			if(s[j]==a[i][0]) {
				s[j]=a[i][1];
				break;
			}
		}
		if(s[j]=='.')
			dot = 1;
		}
		j--;
		if(dot == 1)
			for(;j>=1 && s[j]=='0';j--);
		for(m=0;s[m]=='0';m++);
		if(s[j]=='.') j--;
		if(j<m || s[m]=='\0') printf("0");
		else {
			while(m<=j) {
				printf("%c",s[m]);
				m++;
			}	
		}
		printf("\n");
	}
return 0;
}
