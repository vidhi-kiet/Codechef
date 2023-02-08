#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int x,y;
	       cin>>x>>y;
	       int a= y*30;
	       if(a<=x)
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
