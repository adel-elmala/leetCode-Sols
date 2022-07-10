class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> output;
        int sum = 0 ;
        size_t len = nums.size();
        for(size_t i = 0;i < len ;++i)
        {
            sum += nums[i];
            output.push_back(sum);
        }
        return output;
    }
};