#include <iostream>
using namespace std;

int main(){
	int b,i,j;
	cin>>b;
	int a[b];
	for (i=1;i<b+1;i++) {
		cin>>a[i];
	}
	for (i=b;i>0;i--) {
	cout<<a[i]<<" ";
	}
	return 0;
}	
