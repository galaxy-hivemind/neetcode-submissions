class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int>> minHeap;

        if(n == 0) return 0;
        for(auto it: nums){
            minHeap.push(it);
        }

        int prev = minHeap.top();
        minHeap.pop();

        int ans = 1;
        int temp = 1;
        while(!minHeap.empty()){
            int curr = minHeap.top();
            minHeap.pop();
            if(curr == prev + 1){
                temp++;
            } else if(curr == prev){

            }
            else {
                temp = 1;
            }
            prev = curr;
            ans = max(temp, ans);
        }

        return ans;

    }
};
