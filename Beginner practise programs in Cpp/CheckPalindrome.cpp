#include<bits/stdc++.h>
using namespace std;
void checkpalindrome(int num)
{
    int copynum = num;
    int rev = 0; //reverse of num

    while(num != 0)
    {
        rev = rev*10+ num%10;
        num = num/10;

    }

    if(rev == copynum)
        cout<<"Yes it is a palindrome : "<<copynum<<" == "<<rev<<endl;
    else
        cout<<"No it is not a palindrome : "<<copynum<<" != "<<rev<<endl;
}

int main()
{
    cout<<">>Author: Swati Tripathi (swati_gwc)"<<endl;
    cout<<"Program to check wether number is palindrome or not"<<endl;


    int number;
    int ans = 1;

    while(ans == 1)
    {
        cout<<"Enter number :";
        cin>>number;
        checkpalindrome(number);
        cout<<"Do you want to enter a new number? Press 1 to agree or press 0 to disagree : " ;
        cin>>ans;
    }




}

/*
>>Author: Swati Tripathi (swati_gwc)

Program to check wether number is palindrome or not

Enter number :1234
No it is not a palindrome : 1234 != 4321

Do you want to enter a new number? Press 1 to agree or press 0 to disagree : 1

Enter number :787
Yes it is a palindrome : 787 == 787

Do you want to enter a new number? Press 1 to agree or press 0 to disagree : 1

Enter number :98889
Yes it is a palindrome : 98889 == 98889
Do you want to enter a new number? Press 1 to agree or press 0 to disagree : 0
*/
