/*
    Author - Swati(swati_gwc)

   Print Floyd's Triangle

*/
#include <bits/stdc++.h>
using namespace std;
void printFloydTriangle (int n)
{

    int i,j,val=1;

    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            cout<<val++<<" ";
        }
        cout<<endl;
    }

}
int main() {


  cout<<"Let's print a floyd triangle\nEnter a number: ";
  int number;
  cin>>number;
  printFloydTriangle(number);


return 0;
}
/* Output

Let's print a floyd triangle
Enter a number: 7

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

*/
