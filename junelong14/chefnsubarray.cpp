#include<stdio.h>
using namespace std;

int main() {

	int n;
	scanf("%d",&n);
	int a;
	int max = 0;
	int count = 0;

	for(int i=0;i<n;i++) {
		scanf("%d",&a);
		if(a!=0)
			count++;
		else
			count = 0;
		if(count>max)
			max = count;
	}

	printf("%d",max);
	return 0;
}
