class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        ans[0] = nums[0];
        if(n == 1) return ans[0];
        ans[1] = max(nums[0], nums[1]);
        if(n == 2) return ans[1];
        for(int i = 2; i<n; i++){
            ans[i] = max(ans[i-2]+nums[i], ans[i-1]);
        }
        return ans[n-1];
    }
};