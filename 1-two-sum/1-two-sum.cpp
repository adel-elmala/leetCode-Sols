class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        size_t size = nums.size();
        size_t preLast = size - 1;
        vector<int> indicies;
        
        for(size_t i = 0 ; i < preLast  ; ++i)
        {
            for ( size_t j = i + 1; j < size;++j)
                if ((nums[i] + nums[j]) == target)
                {
                    indicies.push_back(i);
                    indicies.push_back(j);
                }
        }
        return indicies;
        
    }
};