class NumArray {
private:
    vector<int> prefix;

public:
    NumArray(vector<int>& nums) {
        // Size it to nums.size() + 1 and initialize all elements to 0
        prefix.resize(nums.size() + 1, 0);
        
        // Build the cumulative sum array
        for (int i = 0; i < nums.size(); i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        // No loop needed! Just a simple subtraction.
        return prefix[right + 1] - prefix[left];
    }
};
