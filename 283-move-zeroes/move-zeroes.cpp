class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;

        // Shift all non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[insertPos] = nums[i];
                insertPos++;
            }
        }

        // Fill remaining spaces with zeroes
        while (insertPos < nums.size()) {
            nums[insertPos] = 0;
            insertPos++;
        }
    }
};