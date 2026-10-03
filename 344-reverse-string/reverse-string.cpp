class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while(left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    cout<<"[";
    for(int i=0; i<s.size(); i++){
        cout<<"\""<<s[i]<<"\"";
        if(i < s.size()-1){          // If NOT last element
            cout<<",";
        }
    }
    cout<<"]";
    }
};