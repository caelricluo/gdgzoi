#include <iostream>
using namespace std;

int main()
{
	int n,m,i,c,s,y;
	c=1;
	s=1;
	cin>>n>>m;
	int a[n];
	for (i=1;i<n;++i)
	{
		a[i]=i;
	}
	while (n > 1)
	{
	   	i++;
		s++;
		if (a[s]/100==1) 
		{
			s++;
		}
        if (s==n)
		{
			s=1;
		}
        if (i==n) 
        {
			n--;
			cout<<a[s]<<" ";
			a[s]=a[s]+100;
			c=1;
			s=1;
		}			
	}
	
	return 0;
}


//#include <iostream> 
//#include <cstring> 
//#define Maxn 100+1 
//using namespace std; 
//bool a[Maxn]; 
//
//int main() 
//{ 
//	int n,m; 
//	cin>>n>>m; 
//	memset(a,0,sizeof(a));
//	int f=0,t=0,s=0;
//	while (f<n)
//	{
//		t=t+1;
//		if (t==n+1) t=1;
//		if (a[t]==0) s=s+1;
//		if (s==m) 
//		{ 
//			s=0
//			cout<<t<<" ";
//			a[t]=1;
//			f=f+1;
//		}
//	}
//return 0;
//}