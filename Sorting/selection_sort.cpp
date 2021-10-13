/*Author: Swati Tripathi*/

#include<bits/stdc++.h>
using namespace std;
#define MAX 256
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Selection sorting
void selectionsort(int arr[], int n)
{
    int minindx = 0;
    for(int i=0; i<n-1;i++)
    {
        minindx= i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minindx])
            {
                minindx = j;
            }
        }
        swap(&arr[i], &arr[minindx]);

    }
}
int main()
{
    int arr[30];
    int n;

    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter value of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    selectionsort(arr, n);

    cout<<"Sorted Array: ";
    for(int i=0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

  return 0;
}


/*

Enter size of array : 7
Enter value of array:  7 8 5 2 4 6 3
Sorted Array: 2 3 4 5 6 7 8

*/
