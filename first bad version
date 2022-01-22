//https://leetcode.com/problems/first-bad-version/
//-------------------------------------------------------


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int med;
        int right = n, left = 1;
        
        
        while(left < right){
            med = left + (right - left)/2;
            if(!isBadVersion(med)){ //the good part 
                left = med + 1;
            }else{                  //the bad part
                right = med ;

            }
        }    
        
         return left;
    }
} ;
