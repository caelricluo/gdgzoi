#include <iostream> 
using namespace std; 

int main() 
{ 
	int n,m,j,i,d,z=0;
	cin>>n>>m;
	int a[n][m];
	for (j=0;j<n;j++)
	{
		for (i=0;i<m;i++)
		{
			cin>>a[i][j];
		}
	}
	for (j=0;j<n;j++)
	{
		for (i=0;i<m;i++)
		{
			d=abs(a[i][j]);
			if (d>z) z=d;
		}
	}
	for (j=0;j<n;j++)
	{
		for (i=0;i<m;i++)
		{
			if (a[i][j]==z) 
			{
				cout<<z<<endl<<j<<" "<<i;
			}
			else{
				if (a[i][j]==-abs(z))
				{
			    cout<<-abs(z)<<endl<<j<<" "<<i;
				}
			}
		}
	}
    return 0;
}


//#include <iostream>
//#include <cmath>
//using namespace std;
//int a[100][100];
//int n,m,x,y,maxn;
//int main()
//{
//	cin>>n>>m;
//	for (int i=0;i<n;i++)
//		for (int j=0;j<m;j++)
//			cin>>a[i][j]; 
//	maxn=abs(a[0][0]);
//	x=0;y=0;
//	for (int i=0;i<n;i++)
//		for (int j=0;j<m;j++)
//			if (abs(a[i][j])>=maxn)
//			{ 
//				maxn=abs(a[i][j]);
//				x=i; 
//				y=j;
//			} 
//			cout<<a[x][y]<<endl;
//			cout<<x<<" "<<y<<endl; 
//			return 0; 
//} 