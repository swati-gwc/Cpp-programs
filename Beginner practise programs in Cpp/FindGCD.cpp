/*
    Author - Swati(swati_gwc)

   Find GCD of two numbers

*/
#include <bits/stdc++.h>
using namespace std;
int findGCD (int n1, int n2)
{

   int i,gcd;
   for(i=1; i<=n1 && i<=n2; ++i)
   {
       if(n1%i==0 && n2%i==0)
       {
           gcd = i;
       }
   }
  return gcd;
}
int main() {


  cout<<"Find GCD \nEnter two numbers: ";
  int n1, n2;
  cin>>n1>>n2;
  int ans = findGCD(n1,n2);

  cout<<"GCD = "<<ans;

return 0;
}
/* Output

Find GCD
Enter two numbers: 12 28
GCD = 4

*/
