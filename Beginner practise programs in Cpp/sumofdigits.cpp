#include<bits/stdc++.h>
using namespace std;
void sumofdigits(int num)
{
   int rem, sum =0;

   while(num!=0)
   {
       rem = num%10;
       cout<<rem;
       sum = sum +rem;
       num = num/10;
       if(num!=0) cout<<"+";
   }
   cout<<"= "<<sum<<endl;
}

int main()
{
    cout<<">>Author: Swati Tripathi (swati_gwc)"<<endl;
    cout<<"Program to find sum of digits"<<endl;

    int num;
    cout<<"Enter number: ";
    cin>>num;

    sumofdigits(num);
    return 0;
}

/*

>>Author: Swati Tripathi (swati_gwc)
Program to find sum of digits
Enter number: 2345
5+4+3+2= 14

*/
