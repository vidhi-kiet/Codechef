#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int a,b,c,d;
	       cin>>a>>b>>c>>d;
	       int r=a-c;
	       int p=b-d;
	       if(r<p)
	       {
	           cout<<"first"<<endl;
	       }
	       else if(r>p)
           {
               cout<<"second"<<endl;
           }	       
           else
           {
               cout<<"any"<<endl;
           }
	   }
	return 0;
}
