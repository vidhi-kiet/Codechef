#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int a,b,c;
	       cin>>a>>b>>c;
	       int p=(a+b)/2;
	       int q=(a+c)/2;
	       int r=(b+c)/2;
	       if((p>=35)&&(q>=35)&&(r>=35))
	       {
	           cout<<"PASS"<<endl;
	       }
	       else
	       {
	           cout<<"FAIL"<<endl;
	       }
	   }
	return 0;
}
