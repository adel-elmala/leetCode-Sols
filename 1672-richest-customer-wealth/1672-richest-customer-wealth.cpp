class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        size_t mAccounts = accounts.size();
        for(size_t i = 0 ; i < mAccounts ;++i)
        {
            size_t nBanks = accounts[i].size();
            int accountWealth=0;
            for(size_t j = 0 ; j < nBanks;j++)
            {
                accountWealth+= accounts[i][j];
            }
            if (accountWealth >= max)
                max = accountWealth;
        }
        return max;
    }
};