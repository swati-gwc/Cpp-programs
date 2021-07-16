#include<bits/stdc++.h>
using namespace std;
void checkarmstrong(int num)
{
   int copynum = num;
   int lengthnum=0,rem=0,sum=0;

   while(copynum!=0)
   {
       copynum/=10;
       lengthnum++;
   }
   copynum = num;
   while(copynum!=0)
   {
       rem = copynum%10;
       sum = sum+ pow(rem,lengthnum);
       copynum/=10;
   }

   if(sum == num)
        cout<<"Yes number is armstrong"<<endl;
   else
        cout<<"No number is not armstrong "<<num<<" != "<<sum<<endl;
}

int main()
{
    cout<<">>Author: Swati Tripathi (swati_gwc)"<<endl;
    cout<<"Program to find sum of digits"<<endl;

    int num;
    cout<<"Enter number: ";
    cin>>num;

    checkarmstrong(num);
    return 0;
}

/*
>>Author: Swati Tripathi (swati_gwc)
Program to find sum of digits
Enter number: 1634
Yes number is armstrong

*/
