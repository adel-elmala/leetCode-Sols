class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto x:nums)
        {
            int cnt = ++umap[x];
            if(cnt > 1)
                return true;
        }
        
        return false;
        
    }
};