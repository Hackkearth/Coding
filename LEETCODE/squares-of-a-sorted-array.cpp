//https://leetcode.com/problems/squares-of-a-sorted-array/


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>square(nums.size());
        int left = 0 ,right = nums.size() - 1;
        
        for(int i = nums.size()-1 ; i >= 0 ; i--){
            if(abs(nums[left])  < abs(nums[right])){
                square[i] = pow(nums[right--], 2);
            }else{
                square[i] = pow(nums[left++], 2);
            }
        }
        
        return square;
    }
};
