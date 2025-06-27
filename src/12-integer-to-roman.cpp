class Solution {
public:

    int value(char x) {
        if (x == 'I')
            return 1;
        if (x == 'V')
            return 5;
        if (x == 'X')
            return 10;
        if (x == 'L')
            return 50;
        if (x == 'C')
            return 100;
        if (x == 'D')
            return 500;
        if (x == 'M')
            return 1000;
        return -1;
    }

    int romanToInt(string s) {

        int result = 0; 

        for (int i = 0; i < s.length(); i++) {
            
            // Get value of current roman numeral symbol
            int x1 = value(s[i]);

            // Check with next roman numeral symbol if there is one
            if (i + 1 < s.length()) {
                int x2 = value(s[i + 1]);

                // If current value is greater or equal, add it to the result
                if (x1 >= x2) {
                    result += x1;
                }
                else {
                    // Or subtract the amount of the first symbol
                    result += (x2 - x1);
                    i++;
                }
            }
            else {
                result += x1;
            }
        }

        return result;

    }
    
};