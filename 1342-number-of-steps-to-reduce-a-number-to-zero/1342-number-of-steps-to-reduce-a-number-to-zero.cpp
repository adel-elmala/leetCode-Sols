class Solution {
public:
    int numberOfSteps(int num) {
        int counter = 0;
        unsigned int uNum = (unsigned int) num;
        unsigned int LSBmask = 0x00000001;
        while(uNum != 0)
        {
            if((LSBmask & uNum) == 0) 
            {
                uNum >>= 1;
            }
            else
                uNum -=1;
            ++counter;
        }
        return counter;
    }
};