class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;

    // 1. Sort the array -> [1, 2, 3, 4, 100, 200]
    sort(nums.begin(), nums.end());

    int max_streak = 1;
    int current_streak = 1;

    // 2. Loop through the sorted elements
    for (size_t i = 1; i < nums.size(); i++) {
        // Skip duplicates so they don't break our streak calculation
        if (nums[i] == nums[i - 1]) {
            continue;
        }
        
        // If the difference is exactly 1, extend the current streak
        if (nums[i] == nums[i - 1] + 1) {
            current_streak++;
        } 
        // If the difference is greater, the streak breaks. Reset it.
        else {
            max_streak = max(max_streak, current_streak);
            current_streak = 1;
        }
    }

    // Return the absolute longest streak found
    return max(max_streak, current_streak);
    }
};