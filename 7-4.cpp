#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,i;
    for (i=10;i<100;++i)
    {
    	a=i/10;
    	b=i%10;
    	c=b*10+a;
    	d=c+i;
    	if(d<100)
    	{
    		cout<<i<<" ";
		}
    	
	}
    return 0;
}

