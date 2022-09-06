class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        int leftSum = 0 ;
        int rightSum = 0 ; 
        for (int i = 0 ; i < len ; ++i)
        {
            for ( int j = 0; j < len ; ++j)
            {
             
                    if (j < i)
                        leftSum += nums[j];
                    else if (j > i)
                        rightSum += nums[j];

             
            }
            if (leftSum == rightSum)
                return i;
            leftSum = 0 ;
            rightSum = 0 ;
            
        }
        return -1;
        
    }
};