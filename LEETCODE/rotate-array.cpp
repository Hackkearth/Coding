//https://leetcode.com/problems/rotate-array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> shift;
        if(k > nums. size())    k %= nums.size();
        

        k = nums.size() - k;
        
        nums.insert(nums.end() ,nums.begin(), nums.begin() + k); 
        nums.erase(nums.begin(), nums.begin() + k);
        
       
    }
};
