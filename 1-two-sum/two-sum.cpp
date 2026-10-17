class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> x;
        for (int i = 0; i < nums.size(); i++) {
            int k = target - nums[i];
            auto l = find(nums.begin() + i + 1, nums.end(), k);
            if (l != nums.end()) {
                int index = l - nums.begin();
                x.push_back(i);
                x.push_back(index);
                break;
            }
        }
        return x;
    }
};
