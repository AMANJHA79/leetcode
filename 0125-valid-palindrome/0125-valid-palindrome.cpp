class Solution {
public:
    bool isPalindrome(string s) {
        return check(s, 0, s.length() - 1);
    }

private:
    bool check(const string& s, int left, int right) {

        if (left >= right) return true;

        if (!isalnum(s[left])) return check(s, left + 1, right);
        if (!isalnum(s[right])) return check(s, left, right - 1);

        if (tolower(s[left]) != tolower(s[right])) return false;

        return check(s, left + 1, right - 1);
    }
};