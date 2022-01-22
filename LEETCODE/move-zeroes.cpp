//https://leetcode.com/problems/move-zeroes/


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int last_non_zero = 0;
        for(int i = 0; i < nums.size() ; i++){
            if(nums[i] != 0)
                nums[last_non_zero++] = nums[i];
        }
      //  fill(nums.begin() + last_non_zero, nums.end(), 0);
        for(int i = last_non_zero ; i < nums.size() ; i++)  
            nums[i] = 0;
    }
};
