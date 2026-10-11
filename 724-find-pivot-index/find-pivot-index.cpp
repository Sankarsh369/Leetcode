class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        int left_sum = 0;
        
        // 1. Calculate the grand total of the entire vector
        for (int num : nums) {
            total_sum += num;
        }
        
        // 2. Iterate through and check each index as a potential pivot
        for (int i = 0; i < nums.size(); i++) {
            // Right sum is total minus what's on the left and the pivot itself
            int right_sum = total_sum - left_sum - nums[i];
            
            if (left_sum == right_sum) {
                return i; // Found the leftmost pivot index!
            }
            
            // Update left_sum for the next iteration
            left_sum += nums[i];
        }
        
        return -1; // No pivot index found
    }
};
