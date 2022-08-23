class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int len = nums.size();
        int max = 0;
        int tmp = 0;
        for(int i = 0 ; i < len ; ++i)
        {
            (nums[i] == 0 ? (max = tmp > max?tmp:max),tmp=tmp * 0:tmp++);
        }
        
        return max>tmp?max:tmp;
    }
};