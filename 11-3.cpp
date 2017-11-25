#include <iostream>
using namespace std;

int main()
{
	int b,i,c,j;
	cin>>b>>c;
	int a[b];
	for (i=1;i<b+1;i++) a[i]=1;
	for (j=2;j<c+1;j++){
	for (i=1;i<b+1;++i) if (i%j==0) if (a[i]==0) a[i]=1;else a[i]=0;
	}
	for (i=1;i<b+1;++i) if (a[i]==1) cout<<i<<" ";
	return 0;
}