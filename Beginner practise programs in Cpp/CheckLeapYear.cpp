/*
    Author - Swati(swati_gwc)

   Check if year is leap year or not

*/
#include <bits/stdc++.h>
using namespace std;
bool isleapyear(int year)
{
    return ((year%400==0) || ((year%100!=0) && (year%4==0)));
}
int main() {


  cout<<"Check is year is leap year or not :\nEnter a year: ";
  int y;
  cin>>y;

  isleapyear(y) ? cout<<"Yes it is a leap year " : cout<<"No it is not a leap year." ;


return 0;
}
/* Output

Check is year is leap year or not :
Enter a year: 2044
Yes it is a leap year

*/
