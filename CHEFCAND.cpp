#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int n,x;
	       cin>>n>>x;
	       int a=abs(n-x);
	       
	       if(n>x)
	       {
	       if(a%4==0)
	       {
	           cout<<a/4<<endl;
	       }
	       else
	       {
	           cout<<a/4+1<<endl;
	       }
	       }
	       else
	       {
	           cout<<"0"<<endl;
	       }
	       
	   }
	return 0;
}
