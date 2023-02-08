#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int x,a;
	       cin>>x;
	       if(x<=100)
	       {
	           cout<<x<<endl;
	       }
	       else if(x>100 && x<=1000)
	       {
	          a=x-25; 
	          cout<<a<<endl;
	       }
	       else if(x>1000 && x<=5000)
	       {
	           cout<<x-100<<endl;;
	           
	       }
	       else
	       {
	           cout<<x-500<<endl;
	       }
	       
	   }
	return 0;
}
