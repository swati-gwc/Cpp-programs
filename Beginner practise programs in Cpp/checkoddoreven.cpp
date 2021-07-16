#include<bits/stdc++.h>
using namespace std;
void checkOddorEven(int num)
{
    if(num%2 == 0)
        cout<<"Number is even"<<endl;
    else cout<<"Number is odd"<<endl;
}

int main()
{
    cout<<">>Author: Swati Tripathi (swati_gwc)"<<endl;
    cout<<"Program to check number is odd or even"<<endl;

    int num;
    cout<<"Enter number: ";
    cin>>num;

    checkOddorEven(num);
    return 0;
}

/*

>>Author: Swati Tripathi (swati_gwc)
Program to check number is odd or even
Enter number: 28884
Number is even
*/
