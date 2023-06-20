class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complementMap;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            if (complementMap.count(complement)) {
                result.push_back(complementMap[complement]);
                result.push_back(i);
                break;
            }
            
            complementMap[nums[i]] = i;
        }
        
        return result;
    }
};
