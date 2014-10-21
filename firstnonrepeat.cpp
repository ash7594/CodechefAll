#include<bits/stdc++.h>
using namespace std;

struct node {
	char data;
	node *link;
};

node *front=NULL;
node *rear=NULL;

int main() {
	int n;
	cin>>n;
	char a[n];
	int h[26][2] = {0};
	node *temp;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		h[a[i]-'a'][0]++;
		if(h[a[i]-'a'][0]==2) {
			a[h[a[i]-'a'][1]]='0';
			while(a[h[int(front->data)-'a'][1]]=='0') {
				temp=front;
				front=front->link;
				delete temp;
			}
		} else if(h[a[i]-'a'][0]>2) {
			
		} else {
			h[a[i]-'a'][1]=i;
			node *p = new node;
       			p->data=a[i];
       			p->link=NULL;

       			if(rear==NULL) {
             			front=rear=p;
      			} else {
      	     	  	        rear->link=p;
              			rear=p;
        		}
		}
	}
	cout<<"ans:"<<endl<<front->data<<endl;
	return 0;	
}
