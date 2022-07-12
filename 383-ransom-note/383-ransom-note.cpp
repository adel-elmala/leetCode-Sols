class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int letterCount[26] = {0};
        size_t magSize = magazine.size();
        for(int i = 0; i < magSize; ++i)
        {
            letterCount[(unsigned int)( magazine[i] - 'a')] += 1;
        }
        
        size_t NoteSize = ransomNote.size();
        for(int i = 0; i < NoteSize; ++i)
        {
            unsigned int index = (unsigned int)( ransomNote[i] - 'a');
            letterCount[index] -= 1;
            if(letterCount[index] < 0)
                return false;
        }
        return true;
    }
};