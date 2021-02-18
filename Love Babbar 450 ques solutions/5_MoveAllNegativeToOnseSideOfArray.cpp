#include <bits/stdc++.h>
using namespace std;
void basicway(int [], int);
void twoPointerway(int [], int);
void printarray(int [], int n);
void swapvalues(int *, int *);

int main() {

    int arr[100];
    int i,j,n,choice;

    cout<<"Enter size of array"<<endl;
    cin>>n;

    cout<<"Enter array values"<<endl;
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Two ways to do it are: \n"<<endl;
    cout<<"1.Basic 0(n) method \n";
    cout<<"2.Two Pointer Technique\n";

    cout<<"\nEnter your choice (1/2) ?"<<endl;
    cin>>choice;

    if(choice ==1) basicway(arr,n);
    else if(choice ==2) twoPointerway(arr,n);
    else{
         cout<<"You can only enter 1 or 2 !\n Program Ends here!!";
        return 0;
    }

    cout<<"Final array values after shifting all negative values at left are: \n";
    printarray(arr,n);

return 0;
}

void basicway(int arr[], int n){

    int i,j=0;

    for(i=0;i<n; i++){

        if(arr[i]<0){
            if(i!=j)
                swapvalues(&arr[i], &arr[j]);
            j++;
        }
    }
}

void twoPointerway(int arr[], int n){

    int left = 0;
    int right = n-1;

    while(left<=right){

        if(arr[left]<0 && arr[right]<0){
            left++;
        }
        else if(arr[left]>=0 &&arr[right]<0){
            swapvalues(&arr[left], &arr[right]);
            left++;
            right--;
        }
        else if(arr[left]>=0 && arr[right]>=0){
            right--;
        }
        else{
            left++;
            right--;
        }

    }

}
void printarray(int arr[], int n){

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}
void swapvalues(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/*
OUTPUT SAMPLE

Enter size of array
9
Enter array values
-1 2 -3 4 5 6 -7 8 -9
Two ways to do it are:

1.Basic 0(n) method
2.Two Pointer Technique

Enter your choice (1/2) ?
1
Final array values after shifting all negative values at left are:
-1 -3 -7 -9 5 6 2 8 4
*/
