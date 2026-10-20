class Solution {
public:

    int findVal(vector<int> &piles, int mid){
        int n = piles.size();
        int ans = 0;

        for(int i = 0; i<n; i++){
            if(piles[i] <= mid){
                ans += 1;
                continue;
            }
            ans += (piles[i] % mid == 0)? piles[i]/mid: piles[i]/mid + 1;
        }

        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int start = 1;
        int end = INT_MIN;

        for(int i = 0; i<n; i++){
            end = max(end, piles[i]);
        }

        while(start <= end){
            int mid = start + (end - start)/2;

            int val = findVal(piles, mid);

            if(val <= h){
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return start;
    }
};
