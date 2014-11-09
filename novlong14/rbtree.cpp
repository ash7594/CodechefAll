#include<bits/stdc++.h>
#define comp(a) ((a%2==0)?a/2:(a-1)/2)
#define invert(a) ((a==1)?0:1)
using namespace std;

long long sq[31];

int main() {
	for(int i=0;i<=30;i++)
		sq[i] = pow(2,i);

	char s[2];
	int ivt = 0;
	long long x,y,q,a,b,j,res;
	cin>>q;
	while(q--) {
		x=y=0;
		cin>>s;
		if(s[1] == 'i') {
			ivt = invert(ivt);
			continue;
		}

		cin>>x>>y;
		for(a=0;x>=sq[a];a++);
		for(b=0;y>=sq[b];b++);
		
		while(x!=y) {
			if(x>y) x=comp(x);
			else y=comp(y);
		}

		for(j=0;x>=sq[j];j++);
		
		//cout<<a<<" "<<b<<" "<<j<<" ";
		
		if(s[1] == 'b') {
		if(ivt==0) { //b
			if(j%2==1) { //b
				res = (a-j)/2 + (b-j)/2 + 2;
				res--;
			} else { //r
				res = (a-j+1)/2 + (b-j+1)/2;
			}
		} else { //r
			if(j%2==0) { //r
				res = (a-j)/2 + (b-j)/2 + 2;
				res--;
                        } else { //b
                		res = (a-j+1)/2 + (b-j+1)/2;
                        }
		}
		} else if(s[1] == 'r') {
                if(ivt==0) { //b
                        if(j%2==0) { //b
                                res = (a-j)/2 + (b-j)/2 + 2;
				res--;
                        } else { //r
                                res = (a-j+1)/2 + (b-j+1)/2;
                        }
                } else { //r
                        if(j%2==1) { //r
                                res = (a-j)/2 + (b-j)/2 + 2;
				res--;
                        } else { //b
                                res = (a-j+1)/2 + (b-j+1)/2;
                        }
                }
                }

		cout<<res<<endl;
	}
	return 0;
}
