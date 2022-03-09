//Two Sum problem using map
//https://leetcode.com/problems/two-sum

#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define mod 1000000007

using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map <int,int> mp;

        for(int i=0; i<nums.size(); i++)
        {
            if(mp.find(target - nums[i]) != mp.end())
                return {i, mp[target-nums[i]]};

            mp[nums[i]] = i;
        }

    return {};

}
int main() {

    vector<int> arr = {2,7,11,15};
	vector<int> ans = twoSum(arr,9);

	cout<<ans[0]<<" "<<ans[1];

	return 0;
}
