#include<iostream>
#include<cmath>
using namespace std;
bool o(int a)
{   
int i;
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0) return false;
		return true;
}
int main()
{
    int a,b,i,n;
    cin>>a>>b;
    for (i=a;i<b+1;++i)
{
    if (i==0) n--;
    if (i==1) n--; 
    if (o(i))
    {
      ++n;
    }
   
}   n--;
    cout<<n;
    return 0;
}


/*#include <iostream>  
#include <cmath>  
   
using namespace std;  
   
const int N = 30000;  
int prime[N+1];  
   
 
void sieveofe(int p[], int n)  
{  
    int i, j;  
   
    p[0] = 0;  
    p[1] = 0;  
    p[2] = 1;  
   
  
    for(i=3; i<n; i++) {  
        p[i++] = 1;  
        p[i] = 0;  
    }  
    int max = sqrt(n);  
    for(i=3; i<=max; i++){  
        if(p[i]) {  
            for(j=i+i; j<=n; j+=i)    
                p[j]=0;  
        }  
    }  
}  
   
void primecount(int p[], int n)  
{  
    int sum = 0;  
    for(int i=0; i<=n; i++) {  
        if(prime[i])  
            sum++;  
        p[i] = sum;  
    }  
}  
   
int main()  
{  
    int m, n;  
   
    sieveofe(prime, N);  
    primecount(prime, N);  
   
    for(;;) {  
        if(!(cin >> m >> n))  
            break;  
   
        cout << prime[n] - prime[m-1] << endl;  
    }  
   
    return 0;  
}*/
