class Solution {
public:
    bool jump(vector<int>& nums) {
        int n = nums.size(),
        int jumps=0,currEnd=0,currFarthest=0;
        for(int i=0; i<nums.size-1;i++){
            canFarthest = max(canFarthest,i+nums[i]);
            if(i==currEnd){
                jumps++;
                currEnd=currFarthest;
            }
        }
        return jump;
    }
};