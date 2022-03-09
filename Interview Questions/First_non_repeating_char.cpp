// Problem: Find the first non-repeating character in a string by doing only one traversal of it.
// Refer: https://www.techiedelight.com/find-first-non-repeating-character-string-one-traversal/
// Amazon Interview Question

#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define mod 1000000007

using namespace std;
int non_repeating_char(string str) {

    unordered_map <char, pair<int,int>> mp;

    for(int i=0; i<str.length(); i++)
    {
        mp[str[i]].first++;
        mp[str[i]].second = i;
    }

    int min_idx = -1;

    for(auto it: mp)
    {
        int count_freq = it.second.first;
        int index = it.second.second;

        if(count_freq == 1 && (min_idx == -1 || (index < min_idx)))
        {
            min_idx = index;
        }
    }

    return min_idx;

}
int main() {

    string st = "ilikekite";

    cout<<st[non_repeating_char(st)]<<" is the first non-repeating character.";


	return 0;
}
