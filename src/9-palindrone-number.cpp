#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str1 = std::to_string(x);   //convert x to string
        reverse(str1.begin(), str1.end());  //reverse string
        long long reverseNum = stoll(str1); //convert back to integer - gave runtime error with int - too small

        if (reverseNum == x){
            return true;
        }
        else{
            return false;
        }
    }
};