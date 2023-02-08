#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int x,y;
	       cin>>x>>y;
	       if(x>y)
	       {
	           cout<<"new phone"<<endl;
	       }
	       else if(x==y)
	       {
	           cout<<"any"<<endl;
	       }
	       else
	       {
	           cout<<"repair"<<endl;
	       }
	   }
	return 0;
}
