#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       
	       int n,x,p;
	       cin>>n>>x;
	       int a=n*x;
	   
	       
	       if(a%4==0)
	       {
	         p=a/4;
	         cout<<p<<endl;
	       }
	       else
	       {
	           p=a/4;
	           cout<<p+1<<endl;
	       }
	       
	       
	       
	   }
	return 0;
}
