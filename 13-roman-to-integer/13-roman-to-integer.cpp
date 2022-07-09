class Solution {
public:
    int romanToInt(string s) {
        size_t len = s.length();
        int sum = 0;
        for(size_t i = 0; i < len ;++i)
        {
            char c = s[i];
            if (c == 'I')
            {
                if(s[i+1] == 'V')
                {
                    sum += 4 ;
                    ++i;
                    continue;
                }
                else if(s[i+1] == 'X')
                {
                    sum += 9 ;
                    ++i;
                    continue;
                } 
            else
            {
                sum += helper(c);
            }
            }
            
            else if (c == 'X')
            {
                if(s[i+1] == 'L')
                {
                    sum += 40 ;
                    ++i;
                    continue;
                }
                else if(s[i+1] == 'C')
                {
                    sum += 90 ;
                    ++i;
                    continue;
                } 
            else
            {
                sum += helper(c);
            }        
            }
            
            else if (c == 'C')
            {
                if(s[i+1] == 'D')
                {
                    sum += 400 ;
                    ++i;
                    continue;
                }
                else if(s[i+1] == 'M')
                {
                    sum += 900 ;
                    ++i;
                    continue;
                } 
            else
            {
                sum += helper(c);
            }        
            }
            else
            {
                sum += helper(c);
            }
        }
        
        return sum;
    }
    int helper(char c)
    {
        switch(c){
            case 'I':
                return 1 ;
                break;                
            case 'V':
                return 5 ;
                break;
            case 'X':
                return 10 ;
                break;
            case 'L':
                return 50 ;
                break;
            case 'C':
                return 100 ;
                break;
            case 'D':
                return 500 ;
                break;
            case 'M':
                return 1000 ;
                break;
            default:
                return 0 ;
                break;
        }
    }
};
