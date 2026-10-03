class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int i = 0, j = 0;    // Two pointers
        
        // Alternate characters from both strings
        while(i < word1.size() && j < word2.size()){
            s += word1[i];  // Add from s1
            s += word2[j];  // Add from s2
            i++;
            j++;
        }
        
        // Add remaining characters from s1
        while(i < word1.size()){
            s += word1[i];
            i++;
        }
        
        // Add remaining characters from s2
        while(j < word2.size()){
            s += word2[j];
            j++;
        }
        return s;
    }
};