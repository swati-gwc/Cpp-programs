//Two Sum Problem asked in Amazon
//Leetcode : https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long int ull;
#define mod 1000000007

using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {

    int index1=-1, index2=-1;

    for(int i=0; i<nums.size()-1; i++)
    {
        index1 = i;
        for(int j=i+1; j<nums.size(); j++)
        {
            if(nums[i]+nums[j] == target)
            {
                index2 = j;
                return {index1, index2};
            }
        }
    }

    return {};

}
int main() {

    vector<int> arr = {2,7,11,15};
	vector<int> ans = twoSum(arr,9);

	cout<<ans[0]<<" "<<ans[1];

	return 0;
}
