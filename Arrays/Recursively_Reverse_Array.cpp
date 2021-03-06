//PROGRAM TO REVERSE AN ARRAY USING RECURSION
// For e.g. array is [1,2,3,4] then we want to make it [4,3,2,1]

#include<bits/stdc++.h>
using namespace std;

//function to reverse array using recursion method
void reverse_array_recursively(int arr[], int i, int j)
{
    // i is start index and j is last index of array
    if(i>=j) return ;
    else
    {
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
       reverse_array_recursively(arr, i+1, j-1);
    }
}
//driver function
int main()
{

    int size =0;
    cout<<"REVERSE AN INTEGER ARRAY USING ITERATION "<<endl;
    cout<<"Enter size of an array//PROGRAM TO REVERSE AN ARRAY USING RECURSION
// For e.g. array is [1,2,3,4] then we want to make it [4,3,2,1]

#include<bits/stdc++.h>
using namespace std;

//function to reverse array using recursion method
void reverse_array_recursively(int arr[], int i, int j)
{
    // i is start index and j is last index of array
    if(i>=j) return ;
    else
    {
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp; 
       reverse_array_recursively(arr, i+1, j-1);
    }
}
//driver function
int main()
{
    
    int size =0;
    cout<<"REVERSE AN INTEGER ARRAY USING RECURSION "<<endl;
    cout<<"Enter size of an array (max 100) "<<endl;
    cin>>size;
    
    //checking size entered by user is in desired range or not
    if(size<1 || size >100)
    {
        cout<<"Size entered is out of range (1-100)\n Programs ends here :("<<endl;
        return 0;
    }
    
    //defining the array
    int arr[size];
    
    cout<<"Enter "<<size<<" integer elements :"<<endl;
    for(int k=0; k<size; k++)
        cin>>arr[k];
        
    cout<<endl;
    
    //printing original array
    cout<<"Array entered is : "<<endl;
    for(int k=0; k<size; k++)
        cout<<arr[k]<<" ";
    cout<<endl;
    
    //CALLING FUNCTION TO REVERSE THE ARRAY : MAIN CODE OF THIS PROGRAM
    reverse_array_recursively(arr, 0, size-1);
    
    //print reversed ARRAY
    cout<<"Reversed array is :"<<endl;
    for(int k=0; k<size; k++)
        cout<<arr[k]<<" ";
    cout<<endl;
    
    return 0;
}

/* OUTPUT OF THIS CODE WILL LOOK LIKE:

REVERSE AN INTEGER ARRAY USING RECURSION 
Enter size of an array (max 100) 
5
Enter 5 integer elements :
1 3 5 7 9

Array entered is : 
1 3 5 7 9 
Reversed array is :
9 7 5 3 1 

*/ 
