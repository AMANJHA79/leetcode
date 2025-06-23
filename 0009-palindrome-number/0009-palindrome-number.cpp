class Solution {
public:
    bool isPalindrome(long int x) {
        if (x < 0) return false;

        long int reverse = 0, copy = x;

        while (x > 0) {
            reverse = (reverse * 10) + (x % 10);
            x = x / 10;
        }

        return reverse == copy;
    }
};