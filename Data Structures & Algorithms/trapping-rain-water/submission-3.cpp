class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int start = 0;
        int end = n-1;

        int lmax = height[start], rmax = height[end];
        start++;
        end--;

        int ans = 0;
        while(start <= end){
            if(lmax <= rmax){
                if(lmax > height[start]){
                    ans += lmax - height[start];
                } else {
                    lmax = height[start];
                }
                start++;
            } else {
                if(rmax > height[end]){
                    ans += rmax - height[end];
                } else {
                    rmax = height[end];
                }
                end--;
            }
        }

        return ans;
    }
};
