#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define mod 1000000007

using namespace std;

int main() {
	// your code goes here
	ll t,n,m,x,y,a,b;
	cin>>t;
	while(t--)
	{
	  cin>>n>>m>>x>>y;

	  if(y<x)
	  {
	   x=y;
	  }
	   if((n*m)%2==0)
	  {
	      //cout<<"x "<<x<<endl;
	      //cout<<"y "<<y<<endl;
	      a=(n*m)/2;
	      //cout<<"a "<<a<<endl;
	      b=a*(y-x)+a*x;
	      //cout<<"b "<<b<<endl;
	  }
	  else
	  {
	      //cout<<"x "<<x<<endl;
	      //cout<<"y "<<y<<endl;
	      a=(n*m)/2 + 1;
	      //cout<<"a "<<a<<endl;
	      b=(a*x + (a-1)*(y-x));
	      //cout<<"b "<<b<<endl;
	  }
      cout<<b<<endl;
	}
	return 0;
}

/*
int main() {
	// your code goes here
	ull t,n,m,x,y,a,b;
	cin>>t;
	while(t--)
	{
	  cin>>n>>m>>x>>y;
	  if((n*m)%2==0)
	  {
	      a=(n*m)/2;
	      b=a*(y);
	  }
	  else
	  {
	      a=(n*m)/2 + 1;
	      b=(a*x + (a-1)*(y-x));
	  }


	  cout<<b<<endl;
	}
	return 0;
}*/
