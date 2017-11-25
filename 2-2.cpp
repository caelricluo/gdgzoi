#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,e;
	cin>>a;
	b=a/100;
	c=a%100%10;
	d=a%100/10;
	e=c*100+d*10+b;
	cout<<e;

} 
