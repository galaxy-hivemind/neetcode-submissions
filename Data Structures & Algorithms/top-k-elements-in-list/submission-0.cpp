class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<vector<int>> maxHeap;
        unordered_map<int, int> mpp;

        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }

        for(auto it: mpp){
            maxHeap.push({it.second, it.first});
        }

        vector<int> ans;
        for(int i = 0; i<k; i++){
            ans.push_back(maxHeap.top()[1]);
            maxHeap.pop();
        }

        return ans;
    }
};
