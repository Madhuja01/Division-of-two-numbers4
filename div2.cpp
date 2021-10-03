#include<iostream>
using namespace std;
int main() {
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	if(b==0) {
		cout<<"Division not possible";
	}
	else {
		cout<<"Quotient = "<<a/b;
	}
	return 0;
}
