/*
    Author - Swati(swati_gwc)
    Aim: Rotate Matrix using another array
    Reference Question: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/770/
*/
#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

int main() {



    unsigned long long int a,  b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r,s, t, u, v, w, x, y, z, maxx, minn;
      a= b = c = d = e = f = g = h = i = j = k = l = m = n = o = p = q = r= s = t = u = v = w = x = y = z = 0;


    int arr[10][10], brr[10][10];

    cout<<"Enter size of matrix : ";
    cin>>n;

    cout<<"Input "<<n<<" X "<<n<<" matrix elements: \n";
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cin>>arr[i][j];

    //rotate matrix
    for(i=0, k =n-1; i<n; i++,k--)
        for(j=0, m =0; j<n; j++, m++)
            brr[m][k] = arr[i][j];

    cout<<"\nRotated matrix is: \n";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cout<<brr[i][j]<<" ";
        cout<<endl;
    }

return 0;
}
/* OUTPUT
Enter size of matrix : 3
Input 3 X 3 matrix elements:
1 2 3
4 5 6
7 8 9

Rotated matrix is:
7 4 1
8 5 2
9 6 3
*/
