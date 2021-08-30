/*
    Author - Swati(swati_gwc)

    Question : Print Fibonacci Series
    Also learn how to return array in functions in C++/C
    
*/
#include <bits/stdc++.h>
using namespace std;
int * fib(int n)
{
    static int series[30];

    series[0]=0;
    series[1]=1;

    for(int i=2; i<n; i++)
    {
        series[i] = series[i-1] + series[i-2];

    }
    return series;
}
int main() {


   int * ans;
   int n;

   cout<<"Fibonacci Series \n";

   cout<<"Enter how many values you want to display ? (max:30) : ";
   cin>>n;

   if(n>30)
   {
       cout<<"Value entered is exceeding 30 values";
       return 0;
   }

   ans = fib(n);

   cout<<"Fibonacci series : ";
   for(int i=0; i<n; i++)
   {
       cout<<*(ans+i)<<" ";
   }

return 0;
}
/* Output

Fibonacci Series
Enter how many values you want to display ? (max:30) : 20
Fibonacci series : 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181

*/
