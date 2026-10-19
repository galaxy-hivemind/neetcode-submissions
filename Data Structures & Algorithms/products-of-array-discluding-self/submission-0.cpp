class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long num = nums[0];
        int n = nums.size();
        vector<int> ans(n, 1);

        for(int i = 1; i<n; i++){
            ans[i] = num;
            num *= nums[i];
        }

        num = nums[n-1];
        for(int i = n-2; i>=0; i--){
            ans[i] *= num;
            num *= nums[i];
        }

        return ans;
    }
};
