class Solution {
public:
    int numberOfSteps(int num) {
        int counter = 0;
        unsigned int uNum = (unsigned int) num;
        unsigned int LSBmask = 0x00000001;
        unsigned int mask = 0xFFFFFFFE;
        while(uNum != 0)
        {
            if((LSBmask & uNum) == 0) // even
            {
                uNum >>= 1;
            }
            else // odd
                uNum &= mask;
            ++counter;
        }
        return counter;
    }
};