#include<bits/stdc++.h>
#define maxf(a,b) ((a>b)?a:b)
using namespace std;

long long s,m,t1,t2,ans,prev,fans,xtm;
char a[10][10] = {"80\0","9874310\0","82\0","983\0","984\0","9865\0","86\0","98730\0","8\0","98\0"};

int ipoten(int k,char m[],char s[]) {
	int l=0;
	char c;
	for(;k>=0;k--) {
		l=0;
		c=s[k];
		if(c=='.') continue;
		for(;a[c-48][l]!='\0';l++) {
			if(a[c-48][l]<m[k])
				return 1;
		}
		if(a[c-48][l-1]>m[k])
			return 0;
	}
	return 1;

}

void dooper(char su[], char mu[], int i, int j, int qq) {
	int l,temp=0;
	ans=0;
                char c;
                for(int k=i-1;k>=0;k--) {
                        l = 0;
                        c=su[k];
                        if(c=='.' && qq>(i-1-k)) {
                                t1 = 0;
                                for(int p=k-1;p>=0;p--)
                                        t1 = (10*t1) + int(mu[p]) - 48;
                                //cout<<t1<<endl;
                                //cout<<ipoten(k-1,mu,su)<<endl;
                                if(t1>=t2 || ipoten(k-1,mu,su)==1) {
                                        if(temp==0 && mu[k]=='0') {}
                                        else
                                                {ans=ans*10+int(mu[k]-48); temp=1;}
                                        continue;
                                } else {
                                        if(temp==0 && mu[k]=='1') {}
                                        else
                                                {ans=ans*10+int(mu[k]-49);temp=1;}
                                        goto h;
                                }
                        } else if(c=='.') {
                                while(k>=0) {
                                        ans=ans*10+int(mu[k]-48);
                                        k--;
                                }
                                goto kl;
                        }
				
			for(;a[c-48][l]!='\0';l++);l--;
                        //su[k]='0';
                        while(l>=0) {
                                if(a[c-48][l] > mu[k])
                                        break;
                                su[k] = a[c-48][l];
                                l--;
                        }

                        if((su[k]=='0' && temp==1) || (su[k]!='0' && su[k]!='.')) {ans=ans*10+int(su[k]-48);temp=1;}
                        else continue;

                        if(su[k]<mu[k]) {
                                h:
                                k--;
                                while(k>=0) {
                                        if(su[k]!='.')
                                                ans=ans*10+int(a[su[k]-48][0]-48);
                                        else ans=ans*10+9;
                                        temp = 1;
                                        k--;
                                }
                        }
                }
                if(temp==0) ans=ans*10+0;
                kl:
                cout<<ans<<endl;
		if(ans>xtm) return;

		fans = maxf(fans,ans);
		//cout<<fans<<endl;
		//ans = fans;

}

int main() {
	//char a[10][10] = {"80\0","9874310\0","82\0","983\0","984\0","9865\0","86\0","98730\0","8\0","98\0"};
	int t;
	char su[10],mu[10],nsu[10];
	cin>>t;
	while(t--) {
		int i,j,z;
		i=j=z=-1;
		cin>>s>>m;
		t1 = m;
		t2 = s;
		xtm = m;
		if(m==0) {
			cout<<"0\n";
			continue;
		}

		while(m!=0) {
                        mu[++j] = (m%10)+48;
                        m/=10;
                }
                mu[++j]='\0';
		
		if(s==0) su[++i] = '0';
		while(s!=0) {
			su[++i] = (s%10)+48;
			s/=10;
			//cout<<su[i]<<endl;
		}
		su[++i]='\0';

		/*while(j>i) {
			su[++i] = '.';
		}
		su[i] = '\0';*/
		//prev = 0;
		fans = 0;
		for(int y=0;y<=(j-i);y++) {
			z=-1;
			for(int pp=0;pp<y;pp++) nsu[++z] = '.';
			for(int pp=0;pp<i;pp++) nsu[++z] = su[pp];
			for(int pp=0;pp<(j-i)-y;pp++) nsu[++z] = '.';
			nsu[++z] = '\0';
			dooper(nsu,mu,z,j,j-i-y);
		}
		cout<<fans<<endl;
			/*while(mu[k]>su[k] && a[c-48][l]!='\0') {
				if(a[c-48][l] > mu[k])
					break;
				su[k] = a[c-48][l];
				l++;
		}*/

	}
	return 0;
}
