class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i<n; i++){
            while(nums[i] - 1 != i){
                int idx = nums[i] - 1;

                if(nums[idx] == nums[i]){
                    return nums[i];
                }
                swap(nums[i], nums[idx]);
            }
        }

        return n;
    }
};
