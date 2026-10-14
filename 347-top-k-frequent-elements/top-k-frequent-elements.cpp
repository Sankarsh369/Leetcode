class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
vector<int> ans;
    unordered_map<int, int> count;
    for(int i=0; i<nums.size(); i++){
        count[nums[i]]++;
    }
    vector<pair<int, int>> vec(count.begin(), count.end());
    if (k > vec.size()) k = vec.size(); 
    partial_sort(vec.begin(), vec.begin() + k, vec.end(), 
    [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second; 
    });
    for (int i = 0; i < k; ++i) {
        ans.push_back( vec[i].first);
    }
    return ans;
    }
};