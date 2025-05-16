#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str1 = std::to_string(x);
        reverse(str1.begin(), str1.end());
        int reverseNum = stoi(str1);

        if (reverseNum == x){
            return true;
        }
        else{
            return false;
        }
    }
};