//Program to convert number from binary to decimal or vice n verca

#include<bits/stdc++.h>
using namespace std;
#define MAX 256
void decimal2binary(int n)
{

    int binaryno[32];

    int i= 0;

    while(n>0)
    {
       binaryno[i]  = n%2 ;
       n = n/2;
       i++;
    }

    cout<<"Binary Conversion : ";
    for(int j=i-1; j>=0; j--)
    {
        cout<<binaryno[j];
    }
}
void binary2decimal(int n)
{
    int t = n;
    int dec = 0;
    int base =1;

    while(t>0)
    {
        int lastdigit = t%10;

        t = t/10;

        dec += lastdigit * base;
         base = base *2;
    }

    cout<<"Decimal Conversion : "<<dec;
}
int main()
{
   int number,choice;

   cout<<"MENU OF PROGRAM \n";
   cout<<"1. Decimal to binary conversion \n";
   cout<<"2. Binary to decimal conversion \n";

   cout<<"Enter your choice (1 or 2): ";
   cin>>choice;

   cout<<"Enter the number: ";
   cin>>number;

   switch(choice)
   {
       case 1: decimal2binary(number); break;
       case 2: binary2decimal(number); break;
       default: cout<<"Your choice was wrong. Program terminates. "<<endl;
   }





   return 0;
}

/*
MENU OF PROGRAM
1. Decimal to binary conversion
2. Binary to decimal conversion
Enter your choice (1 or 2): 2
Enter the number: 1101
Decimal Conversion : 13

MENU OF PROGRAM
1. Decimal to binary conversion
2. Binary to decimal conversion
Enter your choice (1 or 2): 1
Enter the number: 13
Binary Conversion : 1101

*/
