/*283. Move Zeroes
Given an integer array nums, move all 0's to the end of it 
while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.*/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0;
		 vector<int>actual;
         
		for(int i = 0; i < nums.size(); i++){
			if(nums.at(i) == 0)
				zero++;
			else{
                actual.push_back(nums.at(i));
            }
				
		}
		
		if(zero != 0){
			for(int j = 0; j < zero; j++){
				actual.push_back(0);
			}
		}
		
		nums = actual;
    }
};