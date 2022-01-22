//https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int med;
        int right = nums.size()-1, left = 0;
        
        
        while(left < right){
            med = left + (right - left)/2;
            if(target > nums[med]){ 
                left = med + 1;
            }else if(target == nums[med]){                  
                return med;
            }else{
                right = med;
            } 
        } 
        
        if(left == nums.size()-1 && target > nums[left] ) left++;
        
         return left;
   
    }
};
