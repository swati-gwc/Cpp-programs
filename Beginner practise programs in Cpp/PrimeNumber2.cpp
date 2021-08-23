/*
 Program to find prime no less than n, where n is any number entered by user
 Count Primes (Sieve of Eratosthenes)
 Check question here: https://leetcode.com/explore/interview/card/top-interview-questions-easy/102/math/744/
 Faster than 99% solution || easy C++ solution
*/


#include<bits/stdc++.h>
using namespace std;
#define MAX 256

int countPrime(int n)
{

    if(n<=2) return 0;
    cout<<"Prime Numbers less than "<<n<<" is : ";

    //bool composites[n] = {false};
    vector<bool> composites(n,false);

    for(int i=2; i*i<n; i++)
    {
        if(composites[i] == false)
        {
           for(int j = i*i ; j<n; j+=i)
            {
                composites[j] = true;
            }
        }

    }

    int countp = 0;
    for(int i=2; i<n; i++)
        if(composites[i]==false)
        {
            cout<<i<<" ";
            countp++;
        }

    cout<<endl;

    return countp;

}
int main()
{
  int n;

  cout<<"Enter a number :";
  cin>>n;


  int ans = countPrime(n);

  cout<<"Total count = "<<ans<<endl;


  return 0;
}

/*

OUTPUT

Enter a number :20
Prime Numbers less than 20 is : 2 3 5 7 11 13 17 19
Total count = 8

*/
