#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	for (a=0;a<33;++a) 
	{
		for (b=0;b<50;++b) 
	{
	       c=90-a-b;
		
			if (a*15+b*10+c*5==500)
			{
			cout<<a<<" "<<b<<" "<<c<<endl;
			} 
		
	}
	}
	
	
    return 0;
}
