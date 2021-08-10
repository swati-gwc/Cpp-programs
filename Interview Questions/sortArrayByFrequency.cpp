
//sort array on the basis of frequency
#include<iostream>
using namespace std;
#define MAX 256
int main()
{

   int arr[MAX][2], brr[MAX][2];
   int k, n, temp, count1,i,j;
   k=0;

   cout<<"\nEnter the number of elements : \n";
   cin>>n;

   cout<<"\nEnter elements of Array : \n";
   for(i=0; i<n; i++)
   {
       cin>>arr[i][0];
       arr[i][1]=0;
   }

   for(i=0; i<n; i++)
   {

       if(arr[i][1]== 1)
        continue;

       count1 =1;

       for(j = i+1; j<n; j++)
       {

           if(arr[i][0] == arr[j][0])
           {
               arr[j][1] = 1;
               count1++;
           }
       }

       brr[k][0] = arr[i][0];
       brr[k][1] = count1;
       k++;
   }

   n = k;

   cout<<"Array elements and its frequency in UNSORTED order :"<<endl;

   for(i = 0 ; i<n; i++)
   {
       cout<<brr[i][0]<<" : "<<brr[i][1]<<endl;
   }

   for(i=0 ; i<n-1; i++)
   {
       int temp = brr[i][1];

       for(j = i+1 ; j<n; j++)
       {
           if(brr[j][1] > temp)
           {

              temp = brr[j][1];
              brr[j][1] = brr[i][1];
              brr[i][1] = temp;

              temp = brr[j][0];
              brr[j][0] = brr[i][0];
              brr[i][0] = temp;


           }

       }

   }

   cout<<"\nArray elements and it's frequency in sorted order :"<<endl;

   for(i = 0 ; i<n; i++)
   {
       cout<<brr[i][0]<<" : "<<brr[i][1]<<endl;
   }

   cout<<"\nArray elements sorted by its frequency:"<<endl;

   for(i = 0 ; i<n; i++)
   {
       while(brr[i][1]--)
         cout<<brr[i][0]<<" ";
   }


   return 0;
}

/*
OUTPUT


Enter the number of elements :
10

Enter elements of Array :
1 2 2 2 2 5 8 9 9 1
Array elements and its frequency in UNSORTED order :
1 : 2
2 : 4
5 : 1
8 : 1
9 : 2

Array elements and it's frequency in sorted order :
2 : 4
1 : 2
9 : 2
8 : 1
5 : 1

Array elements sorted by its frequency:
2 2 2 2 1 1 9 9 8 5
*/
