/** Leetcode Que_78.
 *  Link: https://leetcode.com/problems/subsets/
  
 *  conditons: The solution set must not contain duplicate subsets,unique elements.

 */
#include <iostream>
#include <vector>
using namespace std;

void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
    if (i == nums.size()) {
        allSubsets.push_back(ans);
        return;
    }

    // include nums[i]
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i + 1, allSubsets);

    // exclude nums[i]
    ans.pop_back();
    getAllSubsets(nums, ans, i + 1, allSubsets);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allSubsets;
    vector<int> ans;
    getAllSubsets(nums, ans, 0, allSubsets);
    return allSubsets;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);

    for (auto subset : result) {
        cout << "[ ";
        for (int x : subset) cout << x << " ";
        cout << "]" << endl;
    }

    return 0;
}
/*  
                     {}
               /                \
          include 1         exclude 1
            {1}                  {}
        /         \         /          \
 include 2   exclude 2   include 2   exclude 2
   {1,2}       {1}         {2}         {}
  /    \      /    \      /    \      /    \
{1,2,3}{1,2}{1,3}{1}{2,3}{2}{3}{ }
*/