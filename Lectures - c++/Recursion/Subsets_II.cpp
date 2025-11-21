/** Leetcode Que_90.
 *  Link: https://leetcode.com/problems/subsets-ii/
 *  Conditions: The solution set must NOT contain duplicate subsets.
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
    // base case
    if (i == nums.size()) {
        allSubsets.push_back(ans);
        return;
    }

    // INCLUDE nums[i]
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i + 1, allSubsets);

    // EXCLUDE nums[i]
    ans.pop_back();

    // SKIP ALL DUPLICATES
    int idx = i + 1;
    while (idx < nums.size() && nums[idx] == nums[i]) idx++;

    getAllSubsets(nums, ans, idx, allSubsets);
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<vector<int>> allSubsets;
    vector<int> ans;

    getAllSubsets(nums, ans, 0, allSubsets);
    return allSubsets;
}

int main() {
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> res = subsetsWithDup(nums);

    for (auto &v : res) {
        cout << "[ ";
        for (auto &x : v) cout << x << " ";
        cout << "]\n";
    }
}
