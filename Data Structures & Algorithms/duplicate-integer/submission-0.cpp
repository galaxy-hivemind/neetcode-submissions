class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size();

        for(int i = 0; i<n; i++){
            freq[nums[i]]++;
            if(freq[nums[i]] > 1) return true;
        }

        return false;
    }
};