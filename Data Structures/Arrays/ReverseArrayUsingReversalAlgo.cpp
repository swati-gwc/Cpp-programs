/*Reversal Algorithm to rotate the array */

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

void rotatearrayright(int arr[], int first, int last, int r)
{
    reversearray(arr,first,last-r);
    reversearray(arr,last-r+1,last);
    reversearray(arr,first, last);
}

void rotatearrayleft(int arr[], int first, int last, int r)
{
    reversearray(arr,first,r-1);
    reversearray(arr,r,last);
    reversearray(arr,first, last);
}

void restore_right_rotatedarray(int arr[], int first, int last, int r)
{
    reversearray(arr,first, last);
    reversearray(arr,last-r+1,last);
    reversearray(arr,first,last-r);

}

void restore_left_rotatearray(int arr[], int first, int last, int r)
{
    reversearray(arr,first, last);
    reversearray(arr,r,last);
    reversearray(arr,first,r-1);

}

int main()
{
  int r,n,arr[20]={0};

  cout<<"Rotate array using Reversal Algorithm \n";

  cout<<"Enter size of array: ";
  cin>>n;

  cout<<"Enter elements of array: ";
  for(int i=0; i<n; i++)
  {
   cin>>arr[i];
  }

  cout<<"\nReversed array is : ";
  reversearray(arr, 0, n-1);
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }

  //Re-reversing the array
  cout<<"\nOriginal array is : ";
  reversearray(arr, 0, n-1);
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }

  cout<<"\nEnter rotation factor by which you want to rotate array , r : ";
  cin>>r;

  cout<<"\n\nRotated array (left rotation) is : ";
  rotatearrayleft(arr,0,n-1,r);
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }

  cout<<"\n\nRestoring Rotated array (left rotation) i.e. Original array is : ";
  restore_left_rotatearray(arr,0,n-1,r);
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }

  cout<<"\n\nRotated array (right rotation) is : ";
  rotatearrayright(arr,0,n-1,r);
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }

  cout<<"\n\nRestoring Rotated array (right rotation) i.e. Original array is : ";
  restore_right_rotatedarray(arr,0,n-1,r);
  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }



  return 0;
}


/*
OUTPUT::
Rotate array using Reversal Algorithm
Enter size of array: 7
Enter elements of array: 1 2 3 4 5 6 7

Reversed array is : 7 6 5 4 3 2 1
Original array is : 1 2 3 4 5 6 7
Enter rotation factor by which you want to rotate array , r : 2


Rotated array (left rotation) is : 3 4 5 6 7 1 2

Restoring Rotated array (left rotation) i.e. Original array is : 1 2 3 4 5 6 7

Rotated array (right rotation) is : 6 7 1 2 3 4 5

Restoring Rotated array (right rotation) i.e. Original array is : 1 2 3 4 5 6 7
*/
