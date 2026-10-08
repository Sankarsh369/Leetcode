class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> s;
        int n=operations.size();
        for(const string& c:operations){
            int val;
            if(c=="+"){
                val= (s[s.size()-2])+(s.back());
                s.push_back(val);
            }else if(c=="D"){
                val=2*s.back();
                s.push_back(val);
            }else if(c=="C"){
                s.pop_back();
            }else{
                val=stoi(c);
                s.push_back(val);
            }
        }
        int sum=0;
        for(int i=0; i<s.size(); i++){
            sum+=s[i];
        }
        return sum;
    }
};