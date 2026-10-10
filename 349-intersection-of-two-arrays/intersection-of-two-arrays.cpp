class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n1=nums1.size(), n2=nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        auto x=unique(nums1.begin(), nums1.end());
        auto y=unique(nums2.begin(), nums2.end());
        nums1.erase(x, nums1.end());
        nums2.erase(y, nums2.end());
        if(nums1.size()>nums2.size()){
            int z=nums1.size();
        }else{
            int z=nums2.size();
        }
        for(int l:nums1){
            if(find(nums2.begin(), nums2.end(), l)!=nums2.end()){
                int val=l;
                ans.push_back(val);
            }
        }
        return ans;
    }
};