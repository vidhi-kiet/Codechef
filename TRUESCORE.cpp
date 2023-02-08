#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int a,b,c,d;
	       cin>>a>>b>>c>>d;
	       if((c>=a)&&(d>=b))
	       {
	           cout<<"possible"<<endl;
	           
	       }
	       else
	       {
	           cout<<"impossible"<<endl;
	       }
	       
	   }
	return 0;
}
