#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int a,c,x;
	       cin>>a>>c;
	       if(abs(a+c)%2==0)
	       {
	           int x=(a+c)/2;
	          cout<<x<<endl; 
	       }
	       else
	       {
	           cout<<"-1"<<endl;
	       }
	   }
	return 0;
}
