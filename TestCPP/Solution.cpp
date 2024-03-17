#include "Solution.h"

vector<int> Solution::twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> umap;// <value, index>
    for (int i = 0; i < nums.size(); ++i) {
        if (umap.contains(target - nums[i])) {
            return { i, umap[target - nums[i]] };
        }
        else {
            umap[nums[i]] = i;
        }
    }
    return {};
}