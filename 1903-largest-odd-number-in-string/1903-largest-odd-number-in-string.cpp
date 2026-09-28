class Solution {
public:
    string largestOddNumber(string num) {
        int ind = -1;
        
        // Iterate through the string from the end to beginning
        int i;
        for (i = num.length() - 1; i >= 0; i--) {
            // Break if an odd digit is found
            if ((num[i] - '0') % 2 == 1) {
                ind = i;
                break;
            }
        }
        
        // Skipping any leading zeroes
        i = 0;
        while(i <= ind && num[i] == '0') i++;
        
        // Return the largest odd number substring
        return num.substr(i, ind - i + 1);
    }
};