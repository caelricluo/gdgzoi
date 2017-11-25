#include <iostream>
using namespace std;
int main()
{
	int b,c;
	double d,a;
    cin>>a;
    if (a<500)
    {
    	d=a*0.5;
    	
	}
	else
	{
		d=500*0.5+(a-500)*0.8;
		
	}
	cout<<d;
	return 0;
	
 } 
