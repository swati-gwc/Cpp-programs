/*
    Author - Swati(swati_gwc)

    Question : To print only the unique numbers in an array
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    vector<int>arr;

    cout<<"Enter size of array : ";
    cin>>n;

    cout<<"Enter array elements : ";
    for(int i=0; i<n; i++)
        {

            int val;
            cin>>val;
            arr.push_back(val);
        }

    sort(arr.begin(), arr.end());
    int same = -1;
    for(int i=0; i<n; i++)
    {

        if(same != arr[i])
        {
            same=arr[i];
            cout<<same<<" ";
        }
    }

return 0;
}
/* Output

Enter size of array : 10
Enter array elements : 9 9 2 7 9 1 1 3 3 4
1 2 3 4 7 9

*/
