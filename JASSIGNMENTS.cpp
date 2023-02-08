#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int x;
	       cin>>x;
	       int a=abs(x-10);
	       if(a>=3)
	       {
	           cout<<"yes"<<endl;
	       }
	       else
	       {
	           cout<<"no"<<endl;
	       }
	   }
	return 0;
}
