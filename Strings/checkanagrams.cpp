/*
    Author - Swati(swati_gwc)

   Check if two strings are anagrams or not

*/
#include <bits/stdc++.h>
using namespace std;
bool checkanagram(char * a, char* b)
{
    int i;
    int countchar[256]={0};

    for(i=0; a[i] && b[i]; i++)
    {
        countchar[a[i]]++;
        countchar[b[i]]--;
    }

    if(a[i]||b[i]) return false;

    for(i=0; i<256; i++)
    {

        if(countchar[i])
            return false;
    }

    return true;
}
int main() {


  char str1[100], str2[100];

  cout<<"Enter string 1: ";
  scanf("%s",str1);

  cout<<"Enter string 2: ";
  scanf("%s",str2);

  bool ans = checkanagram(str1,str2);

  if(ans) cout<<"Yes, "<<str1<<" and "<<str2<<" are anagrams. ";
  else cout<<"No, "<<str1<<" and "<<str2<<" are not anagrams. ";



return 0;
}
/* Output

Enter string 1: aa
Enter string 2: bc
No, aa and bc are not anagrams.

Enter string 1: bbb
Enter string 2: bb
No, bbb and bb are not anagrams.

Enter string 1: bcda
Enter string 2: abcd
Yes, bcda and abcd are anagrams.



*/
