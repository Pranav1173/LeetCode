/* Solution 1 :
Time Complexity : O(4) */

int zeros, ones, twos;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++){
            if(nums.at(i)==0)
                zeros++;
            else if(nums.at(i)==1)
                ones++;
            else
                twos++;
        }
        for (int j = 0; j < nums.size(); j++){
            if(zeros!=0){
                nums.at(j) = 0;
                zeros--;
            }
            else if((ones)!=0 && zeros == 0){
                nums.at(j) = 1;
                ones--;
            } 
            else
                nums.at(j) = 2;
        }
    }
};


/* Solution 2 :
Time Complexity O(0) */

class Solution1 {
public:
    void sortColors1(vector<int>& nums) {
        int low {}, mid {}, high = nums.size() - 1;
        while(mid <= high){
            if(nums.at(mid) == 0){
                swap(nums.at(low), nums.at(mid));
                mid++;
                low++;
            }
            else if(nums.at(mid) == 1)
                mid ++;
            else{
                swap(nums.at(mid), nums.at(high));
                high--;
            }
        }
    }
};