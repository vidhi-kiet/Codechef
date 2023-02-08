#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int x,a;
	       cin>>x;
	       if(1<=x<=1000)
	       {
	           if(x<=25)
	           cout<<"1"<<endl;
	           
	           if(x>25)
	           {
	               if(x%25!=0)
	               {
	               a=x/25;
	               a=a+1;
	               cout<<a<<endl;
	               }
	               
	               else
	               {
	                   a=x/25;
	                   cout<<a<<endl;
	               }
	               
	               
	           }


	       }
	       
	   }
	return 0;
}
