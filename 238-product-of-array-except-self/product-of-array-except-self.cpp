class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ppv(n, 1); // Pre-size to avoid pushing mistakes
        vector<int> spv(n, 1);
        vector<int> ans;

        // Correct prefix logic (initialized to 1)
        int pp = 1;
        for(int i = 0; i < n; i++){
            ppv[i] = pp;
            pp *= nums[i];
        }

        // Correct suffix logic (initialized to 1)
        int sp = 1;
        for(int i = n - 1; i >= 0; i--){
            spv[i] = sp;
            sp *= nums[i];
        }
        // No reverse() needed anymore because we built spv from right-to-left directly!

        // Multiply them together safely (No if-else needed!)
        for(int i = 0; i < n; i++){
            ans.push_back(ppv[i] * spv[i]);
        }
        return ans;
    }
};
