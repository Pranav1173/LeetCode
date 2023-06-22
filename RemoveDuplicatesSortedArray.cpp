#include <vector>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0; // Number of unique elements
        
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0 || nums[i] != nums[k-1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};
