class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int counts[26] = {0};

        // Count how many of each character we have available
        for (char c : magazine) {
            counts[c - 'a']++;
        }

        // Consume characters for the ransom note
        for (char c : ransomNote) {
            counts[c - 'a']--;
            
            // If we ran out of this character, we can't construct the note
            if (counts[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};
