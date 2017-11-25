#include <iostream> 
using namespace std; 

int main() 
{ 
	int n;
	cin>>n;
	int a[n+1][n+1];
	int i,j,k;
	while (n==0)
	{
		n--;
		for (i=1;i<n;i++)
		{
			for (j=1;j<n;j++)
		   {
			  cout<<j;
			  if (j==i-1 || j=
		   }
		}
	}
    return 0;


//#include <iostream>
//using namespace std;
//const int maxn=1000+1;
//long long a[maxn][maxn];
//int i,j,n;
//int main()
//{
//cin>>n;
//for (i=1;i<=n;i++)
//{
//a[1][i]=1;a[i][i]=1;
//}
//for (i=2;i<=n;i++)
//for (j=1;j<i;j++)a[i][j]=(a[i-1][j-1]+a[i-1][j])%4294967296;
//for (i=1;i<=n;i++)
//{
//for (j=1;j<=i;j++) cout<<a[i][j]<<" ";
//cout<<endl;
//}
//return 0;
//}
