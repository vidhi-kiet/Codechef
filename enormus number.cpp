/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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