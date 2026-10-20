class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int currmin = prices[0];
        int ans = 0;
        for(int i = 1; i<n; i++){
            if(prices[i] < currmin){
                currmin = prices[i];
                continue;
            }

            ans = max(ans, prices[i] - currmin);
        }

        return ans;
    }
};
