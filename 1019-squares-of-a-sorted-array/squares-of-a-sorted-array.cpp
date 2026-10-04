class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        
        int left = 0, right = n - 1;
        
        // Fill result from END to START
        // (largest squares are at the ends)
        for(int i = n - 1; i >= 0; i--){
            if(nums[left] * nums[left] > nums[right] * nums[right]){
                result[i] = nums[left] * nums[left];
                left++;
            } else {
                result[i] = nums[right] * nums[right];
                right--;
            }
        }
        
        return result;
    }
};