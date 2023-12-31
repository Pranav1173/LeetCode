class Solution {
public:
    bool isPalindrome(int x) {
        // Convert the integer to a string
        std::string str = std::to_string(x);
        
        // Compare the string with its reverse
        int left = 0;
        int right = str.length() - 1;
        
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }
};
