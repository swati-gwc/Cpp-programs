/*
    Author - Swati(swati_gwc)
    Reverse the string
*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    char s[29];
    cout<<"Enter a string : ";
    scanf("%s",s);

    for(int i=0; i<strlen(s)/2 ; i++)
    {
        swap(s[i], s[strlen(s)-i-1]);
    }

    cout<<"Reversed string is : ";
    printf("%s", s);

return 0;
}

/*
Output of string:

Enter a string : hello
Reversed string is : olleh
*/
