#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,e;
	cin>>a;
	b=a/100;//baiwei
	d=a%100/10;//shiwei
	c=a%100%10;//gewei
	if (c==0)
	{
		e=d*10+b;
	}
	else{
	
	e=c*100+d*10+b;
}
	cout<<e;

} 
