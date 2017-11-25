#include <iostream>
using namespace std;
int main()
{
	int a[3],b,i,j,g;
	cin>>g;
	a[1]=g/100;
	a[2]=g%100%10;
	a[3]=g%100/10;
	for (j=1;j<4;++j)
	{
	
	for (i=1;i<3;++i)
	{
		if (a[i]>a[i+1])
		{
			b=a[i];
			a[i]=a[i+1];
			a[i+1]=b;
			
			
		}
		
	}
  }
		
    cout<<a[3]*100+a[2]*10+a[1]<<endl;
    
	return 0;
	
 } 
 
 
//#include <iostream>
//using namespace std;
//int main( )
//{
//int x,a,b,c,t;\\a代表X的个位数字，b代表十位数字，c代表百位数字。
//cin>>x;
//a=x%10;b=(x/10)%10;c=x/100;
//if (a>b) {t=a;a=b;b=t;};
//if (a>c) {t=a;a=c;c=t;}
//if (b>c) {t=b;b=c;c=t;}
//cout<<100*c+10*b+a<<endl;
//return 0;
//}

