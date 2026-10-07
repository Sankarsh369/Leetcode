class Solution {
public:
    int firstUniqChar(string s) {
        for (int i = 0; i < s.length(); i++) {
            // If the first occurrence is equal to the last occurrence, it's unique!
            if (s.find(s[i]) == s.rfind(s[i])) {
                return i;
            }
        }
        return -1;
    }
};
