class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string longComPrefix = "";

        //sort the vector, that way the least similar words will be the furthest apart
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1]; //find last string after sort

        for(int i = 0; i < first.size(); i++){
            if(first[i] == last[i]){        //check if letter is the same of first and last
                longComPrefix += first[i];  //add letter to longest common prefix
            }
            else
                break;
        }
        
        return longComPrefix;
    }
};