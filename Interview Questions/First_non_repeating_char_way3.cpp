//Finding non repeating characters in a string.
//Refer: https://leetcode.com/problems/first-unique-character-in-a-string/submissions/
//Asked in Amazon Interview

#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define mod 1000000007

using namespace std;
char non_repeating_char(char str[]) {

    int i,index;
    char freq[256] = {0};

    for(int i=0; str[i]!='\0'; i++)
    {
        freq[str[i]]++;
    }

    for(int i=0; str[i]!='\0'; i++)
    {
        if(freq[str[i]] == 1)
        {
            return str[i];
        }
    }

  return -1;
}
int main() {


    char st[] = "likebzalike";
    if(non_repeating_char(st) == -1) cout<<"No non-repeating character. ";
    else
    cout<<non_repeating_char(st)<<" is the first non-repeating character. ";

	return 0;
}
