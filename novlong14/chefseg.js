var a = [];

for(long i=0;i<41;i++)
	a[i] = pow(2,i);

var t,t1;
var x,k,t2;
var res;
	cin>>t;
	while(t--) {
		res = 0;
		cin>>x>>k;
		for(int i=0;i<41;i++) {
			if(k<a[i]) {
				t1 = i;
				break;					
			}
		}
		t2 = x/a[t1];
		cout<<t2<<endl;
		res = (k-a[t1-1])*(x/a[t1-1])+t2;
		cout<<res<<endl;
	}
	return 0;
}
