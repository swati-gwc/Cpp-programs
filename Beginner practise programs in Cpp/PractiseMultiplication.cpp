/*
This program gives multiplication problem to the user whose value he/she has to enter. In the end user will get to know the score he/she obtained. 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
  cout<<"Let's practise Multiplication skills!!\n";
  cout<<"Task: Multiply number and type it's value!\n";
  cout<<"How many questions you want to answer? (Choose between 1-100): ";
  int n;
  cin>>n;
  if(n>100 || n<1){
     cout<<"\nSorry I can't ask questions out of 1-100 range, Program ends here\n";
     return 0;
  } 
  cout<<"Let's begin !! Press -1 any time you want to quit!! \n\n";
  
  int i,t, right =0, wrong =0;
  for(i=0; i<n; i++)
  {
      int a =  rand() % 20 + 1;
      int b = rand()%10 +1;
      cout<<a<<" * "<<b<<" = ";
      cin>>t;
      if(t==-1) {  break;}
      else{
          if(t==a*b) right++;
          else wrong++;
      }
  }
  cout<<"Your score is "<<right<<"/"<<i<<"\n";
  cout<<"You got "<<wrong<<" wrong!!";
  cout<<"\nProgram Ends! ";

    return 0;
}

/****************************************
OUPUT:
Let's practise Multiplication skills!!
Task: Multiply number and type it's value!
How many questions you want to answer? (Choose between 1-100): 5
Let's begin !! Press -1 any time you want to quit!! 

4 * 7 = 28
18 * 6 = 99
14 * 6 = 84
7 * 3 = 21
10 * 2 = 20
Your score is 4/5
You got 1 wrong!!
Program Ends! 
****************************************/
