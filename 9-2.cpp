#include <iostream>
using namespace std;
int main()
{
    long q;
    cin>>q;
    do
    {
    	cout<<q%10;
    	q=q/10;
	}
	while(q!=0);
    return 0;
}
