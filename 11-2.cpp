#include <iostream>
using namespace std;

int main(){
	int b,i,j,z;
	cin>>b;
	int a[b];
	for (i=1;i<=b;i++) {
		cin>>a[i];
	}
	for (j=1;j<b;++j)
 {
	
	for (i=1;i<b;++i)
	{
		if (a[i]>a[i+1])
		{
			z=a[i];
			a[i]=a[i+1];
			a[i+1]=z;
        }
		
	}
  }
	for (i=b;i>0;--i) {
		cout<<a[i]<<" ";
	}
	return 0;
}