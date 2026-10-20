class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int start = 0;
        int end = n - 1;
        int ans = 0;
        while(start < end){
            int curr = min(heights[start], heights[end])*(end - start);

            ans = max(curr, ans);
            if(heights[start] > heights[end]){
                end--;
            } else if(heights[start] < heights[end]){
                start++;
            } else {
                start++;
                end--;
            }
        }

        return ans;

    }
};
