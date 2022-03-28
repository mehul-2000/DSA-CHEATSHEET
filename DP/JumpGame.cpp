//#21 Days of DP

class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        //size of nums array
        int n=nums.size();

        //will maintain a pointer for traversing all 
        //the elements of the array
        int i=0;
        for(int j=0;i<=j && i<n;i++){
            //just look that whether forward pointer is crossing last index or not
            j=max(i+nums[i],j);
        }
        //if i willl reach last index then return true
        return i==n;
    }
};