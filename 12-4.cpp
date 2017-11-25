//#include <iostream>
//using namespace std;
//int n,m,i,j,k,l,maxn,minm,s; 
//int a[1001][1001];
//int main() 
//{
//	cin>>n>>m;s=0;
//	for (i=1;i<=n;i++)
//		for (j=1;j<=m;j++)cin>>a[i][j];
//	for (i=1;i<=n;i++) 
//		for (j=1;j<=m;j++)
//		{ 
//			maxn=a[i][j]; 
//			for (k=1;k<=m;k++)
//				if(maxn<a[i][k])
//					break;
//			if (k==m+1) 
//			{ 
//				minm=a[i][j];
//				for (l=1;l<=n;l++)
//					if (minm>a[l][j])
//						break;
//				if (l==n+1)s=s+1; 
//			} 
//		} 
//		cout<<s<<endl;
//		return 0;
//} 