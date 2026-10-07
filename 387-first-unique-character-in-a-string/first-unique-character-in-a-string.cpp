class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> count;
        for(char x:s){
            count[x]++;
        }
        for(size_t i=0; i<s.size(); i++){
            if(count[s[i]]==1){
                return i;
            }
        }

        return -1;
    }
};