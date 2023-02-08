//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.
#include <bits/stdc++.h> 

using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int c=0;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    
	}
	for(int i=0;i<n;i++)
	{
	   if(a[i]%k==0)
	   {
	       c++;
	   }
	   
	}
	cout<<c<<endl;
	return 0;
}