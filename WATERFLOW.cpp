#include <iostream>
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
    
        int a=(y*z)+w;
        
        if(a>x)
        {
            cout<<"overflow"<<endl;
        }
        else if(a==x)
        {
            cout<<"filled"<<endl;
        }
        else 
        {
            cout<<"unfilled"<<endl;
        }
        
    }
	return 0;
}
