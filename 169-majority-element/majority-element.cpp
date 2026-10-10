class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> count;
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }
    auto maxentry=max_element(count.begin(), count.end(),[]( const auto& a, const auto&b){
        return a.second<b.second;
       }
    );
    int maxkey=maxentry->first;
    return maxkey;
    }
};