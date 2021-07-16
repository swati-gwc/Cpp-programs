#include<bits/stdc++.h>
using namespace std;
void printdigits(int digit1, int digit2)
{
    cout<<"Digit 1 : "<<digit1<<endl;
    cout<<"Digit 2 : "<<digit2<<endl;
    cout<<endl;
}
void swapUsingThirdVar(int digit1,int digit2){

    cout<<"Swapping using Third variable"<<endl;

    int digit3;

    digit3 = digit1;
    digit1 = digit2;
    digit2 = digit3;

    printdigits(digit1, digit2);

}
void swapNotUsingThirdVar(int digit1, int digit2){

   cout<<"Swapping without Third variable"<<endl;
    digit1 = digit1 + digit2;
    digit2 = digit1 - digit2;
    digit1 = digit1 - digit2;

    printdigits(digit1, digit2);

}

int main()
{
    cout<<">>Author: Swati Tripathi (swati_gwc)"<<endl;
    cout<<"Program to swap two digits "<<endl;
    cout<<"Enter two digits"<<endl;

    int digit1, digit2;

    cin>>digit1>>digit2;

     printdigits(digit1, digit2);

    swapUsingThirdVar(digit1, digit2);
    swapNotUsingThirdVar(digit1,digit2);

}

/*
>>Author: Swati Tripathi (swati_gwc)
Program to swap two digits
Enter two digits
5 6
Digit 1 : 5
Digit 2 : 6

Swapping using Third variable
Digit 1 : 6
Digit 2 : 5

Swapping without Third variable
Digit 1 : 6
Digit 2 : 5
*/
