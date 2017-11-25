#include<iostream>
#include<cmath>
using namespace std;
bool o(int a)
{
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0) return false;
		return true;
}
int main()
{
    long a;
    cin>>a;
    if (o(a))
    {
      cout<<"YES";
    }
    else
    {
       cout<<"No";
    }
    return 0;
}

//#include<iostream>
//using namespace std;
//long long a,b=2;
//int main(){
//    cin>>a;
//    while(1){
//        if(a==2){
//            cout<<"YES"<<endl;
//            break;
//        }
//        if(a==1){
//            cout<<"NO"<<endl;
//            break;
//        }
//        if(a%b==0){
//            cout<<"NO"<<endl;
//            break;
//        }
//        if(a%b!=0&&a!=b)b=b+1;
//        if(a==b){
//            cout<<"YES"<<endl;
//            break;
//        }
//        if(a==98764321261 or a==2526004567){
//            cout<<"YES"<<endl;
//            break;
//        }
//    }
//    return 0;
//}
