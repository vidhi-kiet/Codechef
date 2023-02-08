#include <iostream>



using namespace std;

int main() {
	   int t;
	   cin>>t;
	   while(t--)
	   {
	       int a[4];
	       int i,c=0;
	       for(i=0;i<4;i++)
	       {
	           cin>>a[i];
	       }
	       
	       for(i=0;i<4;i++)
	       {
	           if(a[i]==1)
	           {
	               c++;
	           }
	       }
	       if(c>0)
	       {
	           cout<<"out"<<endl;
	       }
	       else
	       {
	           cout<<"in"<<endl;
	       }
	       
	   }
	return 0;
}
