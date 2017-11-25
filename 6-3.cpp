#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    if (b>9) {
    	a=a*100;
	}
	else
	{
		a=a*10;
	}
    c=a+b;
    cout<<c;
    
	return 0;
	
 } 
 
//#include <iostream>
//using namespace std;
//int main( )
//{
//int a,b,k;
//cin>>a>>b;
//if (b<10) k=10;
//if ((b>=10)&&(b<100)) k=100;
//if (b>=100) k=1000;
//cout<<a*k+b<<endl;
//return 0;
//}

 
