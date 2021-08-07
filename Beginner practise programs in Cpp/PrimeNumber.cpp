#include<iostream>

using namespace std;

int main()
{
    int i,j,n,count=0;

    cout<<"Enter how many values you want? ";
    cin>>n;

    for(i=2; i<n; i++)
    {

        for(j=2;j<=i; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count<=1)
        {
            cout<<i<<" ";

        }
          count =0;

    }
    return 0;
}
/* OUTPUT
Enter how many values you want? 100
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/
