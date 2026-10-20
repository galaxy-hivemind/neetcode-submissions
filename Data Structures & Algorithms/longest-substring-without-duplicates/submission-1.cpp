class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256);
        int ans = 0;
        int n = s.length();
        int start = 0;
        int end = 0;

        while(end < n){
            freq[s[end]]++;
            while(start < end && freq[s[end]] > 1){
                freq[s[start]]--;
                start++;
            }

            ans = max(ans, end - start + 1);
            end++;
        }

        return ans;
    }
};
