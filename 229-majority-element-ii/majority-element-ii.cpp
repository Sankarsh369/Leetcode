class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        vector<int> result;
        int threshold = nums.size() / 3;
        
        // 1. Count frequencies of each number
        for (int num : nums) {
            counts[num]++;
        }
        
        // 2. Collect numbers that appear more than n/3 times
        for (auto& pair : counts) {
            if (pair.second > threshold) {
                result.push_back(pair.first);
            }
        }
        
        return result;
    }
};
