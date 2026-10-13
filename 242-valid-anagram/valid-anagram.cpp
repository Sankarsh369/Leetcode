class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths are different, they cannot be anagrams
        if (s.size() != t.size()) {
            return false;
        }
        
        // Array to store counts of 26 lowercase English letters
        int count[26] = {0};
        
        // Count frequencies: increment for s, decrement for t
        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        
        // If any count is not 0, the strings are not anagrams
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};
