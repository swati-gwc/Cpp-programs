/*
  Reverse a string by using strrev or without any library
*/


#include<bits/stdc++.h>
using namespace std;
#define MAX 256

int main()
{
  int i,len;
  char arr[20];

  cout<<"Enter a string : "<<endl;
  gets(arr);

  cout<<"Using library strrev() current string is : ";
  cout<<strrev(arr)<<endl;

  //now let's again reverse the array to its original state

  //finding length of array
  for(len=0; arr[len]!='\0'; len++);

  cout<<"Without using library current string is : ";
  //this reverses the array
  for(i=len-1 ; i>=0; i--)
    cout<<arr[i];


  return 0;
}

/*

OUTPUT
Enter a string :
swati
Using library strrev() current string is : itaws
Without using library current string is : swati

*/
