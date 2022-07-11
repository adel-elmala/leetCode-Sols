class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> output;
        for(int i = 1; i <= n ;++i)
        {
            if(i % 3 == 0)
            {
                if ( i % 5 == 0)
                    output.push_back("FizzBuzz");
                else
                    output.push_back("Fizz");
            }
            else if ( i % 5 == 0)
                    output.push_back("Buzz");
            else
                    output.push_back(std::to_string(i));
                
                
        }
        return output;
    }
};