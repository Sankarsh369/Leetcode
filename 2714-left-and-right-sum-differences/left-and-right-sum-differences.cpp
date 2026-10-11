class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> diff;
        vector<int> leftsum;
        vector<int> rightsum;
        int lsum=0, rsum=0;
        for(int i=0; i<nums.size(); i++){
            leftsum.push_back(lsum);
            lsum+=nums[i];
        }
        for(int i=nums.size()-1; i>=0; i--){
            rightsum.push_back(rsum);
            rsum+=nums[i];
        }
        reverse(rightsum.begin(), rightsum.end());
        int total=leftsum.back();
        for(int i=0; i<nums.size(); i++){
            int val=abs(leftsum[i]-rightsum[i]);
            diff.push_back(val);
        }
        return diff;
    }
};