#include<iostream>
using namespace std;

extern int var;

int main() {
	var = 10;
	cout<<var;

	return 0;
}

int var=12;
