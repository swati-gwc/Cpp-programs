/*
    Author - Swati(swati_gwc)

    Question : Print Fibonacci Series USING RECURSING

*/
#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{

    if(n==0) return 0;
    else if(n==1) return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main() {


   int n;

   cout<<"Fibonacci Series \n";

   cout<<"Enter how many values you want to display ? (max:30) : ";
   cin>>n;

   if(n>30)
   {
       cout<<"Value entered is exceeding 30 values";
       return 0;
   }


   cout<<"Fibonacci series : ";
   for(int i=0; i<n; i++)
   {
       cout<<fib(i)<<" ";
   }

return 0;
}
/* Output

Fibonacci Series
Enter how many values you want to display ? (max:30) : 20
Fibonacci series : 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181

*/
