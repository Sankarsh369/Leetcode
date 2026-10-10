class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int A1[256]={0}, A2[256]={0};

        for(int i=0; i<s.size(); i++){
            if(A1[s[i]]!=A2[t[i]]){
                return false;
            }
            A1[s[i]]=i+1;
            A2[t[i]]=i+1;
        }
        return true;
    }
};