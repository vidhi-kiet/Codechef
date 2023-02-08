#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int x,y,z,a;
	       cin>>x>>y>>z;
	       
	       if(x%z==0)
	       {
	           a=x/z;
	           if(a>=y)
	             cout<<"yes"<<endl;
	           else
	           cout<<"no"<<endl;
	       }
	       else
	       {
	           a=x/z;
	           a=a+1;
	           if(a>=y)
	             cout<<"yes"<<endl;
	           else
	             cout<<"no"<<endl;
	       }
	       
	       
	   }
	return 0;
}
