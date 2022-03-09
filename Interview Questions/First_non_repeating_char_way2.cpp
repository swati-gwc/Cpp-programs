//Finding non repeating characters in a string. If there a more than one character occuring only once then output the alphabetically smallest character.
//Refer: https://prepinsta.com/cpp-program/to-find-non-repeating-characters-in-a-string/
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

    for(int i=0; i<256; i++)
    {
        if(freq[i] == 1)
        {
            index = i;
            break;
        }
    }

    for(int i=0; str[i]!='\0'; i++)
    {
        if(char(index) == str[i])
        {
            return str[i];
        }
    }
}
int main() {


    char st[] = "likezbcalike";

    cout<<non_repeating_char(st)<<" is the first non-repeating character. ";

	return 0;
}
