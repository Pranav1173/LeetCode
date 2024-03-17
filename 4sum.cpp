/*18. 4Sum
Given an array nums of n integers, 
return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]
 

Constraints:
1 <= nums.length <= 200
-109 <= nums[i] <= 109
-109 <= target <= 109
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> quad;
        sort(nums.begin(), nums.end()); // Sorting the Vector to avoid duplicates
        int n = nums.size();
        
        for(int i = 0; i < n - 3; ++i) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for(int j = i + 1; j < n - 2; ++j) {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                int left1 = j + 1;
                int right = n - 1;

                while (left1 < right) {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[left1] + nums[right];
                    if (sum == target) {
                        quad.push_back({nums[i], nums[j], nums[left1], nums[right]});
                        
                        // Skip duplicates of the third number
                        while (left1 < right && nums[left1] == nums[left1 + 1])
                            ++left1;
                        
                        // Skip duplicates of the fourth number
                        while (left1 < right && nums[right] == nums[right - 1])
                            --right;
                        
                        ++left1;
                        --right;
                    } 
                    else if (sum < target) {
                        ++left1;
                    } 
                    else {
                        --right;
                    }
                }
            }
        }
        return quad;
    }
};
