/*
    Author - Swati(swati_gwc)
*/
#include <bits/stdc++.h>
using namespace std;


void findunion(int arr1[],int size1,int arr2[],int size2)
{
    int i=0, j=0,k=0;
    int arr3[size1+size2];

    while(i<size1 && j<size2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            arr3[k] = arr2[j];
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            arr3[k]=arr1[i];
            i++; j++;
        }
        k++;

    }

    while(i<size1){
        arr3[k]=arr1[i];
        k++;
        i++;
    }

    while(j<size2){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    cout<<"\nUninon of array 1 and 2: ";
    for(i=0;i<k; i++)
    {

        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}

void findintersection(int arr1[],int size1,int arr2[],int size2)
{

    int i=0, j=0,k=-1;
    int arr3[size1+size2];

    while(i<size1 && j<size2)
    {

        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            arr3[++k]=arr1[i];
            i++;j++;
        }
    }
    cout<<"\nIntersection of array 1 and 2: ";
    if(k==-1){
        cout<<"No common elements! ";
        return;
    }
    for(i=0;i<=k; i++)
    {

        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}
int main() {

    int i,size1,size2;

    cout<<"Enter elements in sorted order "<<endl<<endl;

    cout<<"Enter size of array 1: ";
    cin>>size1;

    int arr1[size1];
    cout<<"Enter elements of array 1 : ";
    for(i=0; i<size1; i++)
        cin>>arr1[i];



    cout<<"\nEnter size of array 2: ";
    cin>>size2;

    int arr2[size2];
    cout<<"Enter elements of array 2 : ";
    for(i=0; i<size2; i++)
        cin>>arr2[i];


    findunion(arr1,size1,arr2,size2);
    findintersection(arr1,size1,arr2,size2);




return 0;
}

/*SAMPLE OUTPUT:

Enter elements in sorted order

Enter size of array 1: 4
Enter elements of array 1 : 1 3 4 5

Enter size of array 2: 6
Enter elements of array 2 : 1 4 5 6 7 8

Uninon of array 1 and 2: 1 3 4 5 6 7 8

Intersection of array 1 and 2: 1 4 5*/
