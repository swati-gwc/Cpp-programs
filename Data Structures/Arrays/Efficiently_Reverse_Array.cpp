/* Efficient way of reversing the elements of the array */

#include<bits/stdc++.h>
using namespace std;
#define MAX 256
void swapvalue(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void reversearray(int arr[], int first, int last)
{
    while(first<last)
    {
        swapvalue(&arr[first], &arr[last]);
        first++;
        last--;
    }
}
int main()
{
  int n,arr[20]={0};

  cout<<"Enter size of array: ";
  cin>>n;

  cout<<"Enter elements of array: ";
  for(int i=0; i<n; i++)
  {
   cin>>arr[i];
  }

  reversearray(arr, 0, n-1);

  cout<<"Reversed array is : ";
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }

  return 0;
}


/*
OUTPUT::

Enter size of array: 8
Enter elements of array: 1 2 3 4 5 6 7 8
Reversed array is : 8 7 6 5 4 3 2 1

*/
