#include<stdio.h>

int low = 100;
char a[110000];
int b[10][110000];
int c[10] = {0};
int n=0;
void thisisit(int i,int sum) {
	int m;
	int r;
	if(i==n-1 && sum<low) 
		low = sum;
	else if(a[i]!='.') {
		r=int(a[i]);
		a[i] = '.';
		if(c[r-48]!=0) {
			m = c[r-48];
			c[r-48] = 0;
                        for(int j=0;j<m;j++) {
                        	//printf("%d\n",int(b[r-48][j])-48);
			        thisisit(b[r-48][j],sum+1);
			}
		}
		if(i>0)
			if(a[i-1]!='.')
			thisisit(i-1,sum+1);
		if(i<n-1)
			if(a[i+1]!='.')
                        thisisit(i+1,sum+1);
	}

}

int main() {
	for(int j=0;j<10;j++)
                b[j][0] = '\0';

	a[n]=getchar();
	while(int(a[n])!=10) {
		b[int(a[n])-48][c[int(a[n])-48]] = n;
		c[int(a[n])-48]++;
		//b[int(a[n])-48][c[int(a[n])-48]] = '\0';
		a[++n]=getchar();
	}

	a[n]='\0';
//	printf("%d\n",a[0]);
	
	/*for(int i=0;i<10;i++) {
		for(int j=0;b[i][j]!='\0';j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}*/
	thisisit(0,0);	

	printf("%d\n",low);
	return 0;
}
