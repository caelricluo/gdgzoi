#include <iostream>
using namespace std;
int main()
{
long a[10];
int b,i,j;
for (i=1;i<11;++i)
{
	cin>>a[i];
}
for (j=0;j<10;++j)
{
	for (i=1;i<10;++i)
{
	if (a[i]<a[i+1])
	{
		b=a[i];
		a[i]=a[i+1];
		a[i+1]=b;
	}
}
    	
}
    cout<<a[1]<<endl<<a[10];
    return 0;
}

