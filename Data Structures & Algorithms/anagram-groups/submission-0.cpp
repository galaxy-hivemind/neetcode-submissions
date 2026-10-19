
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();

        vector<vector<string>> ans;
        vector<pair<vector<int>, string>> freq;

        for (int i = 0; i < n; i++) {
            vector<int> temp(26, 0);

            for (int j = 0; j < strs[i].length(); j++) {
                temp[strs[i][j] - 'a']++;
            }

            freq.push_back(make_pair(temp, strs[i]));
        }

        sort(freq.begin(), freq.end());

        int i = 0;

        while (i < n) {
            vector<int> curr = freq[i].first;
            int j = i;
            vector<string> temp;

            while (j < n && curr == freq[j].first) {
                temp.push_back(freq[j].second);
                j++;
            }

            ans.push_back(temp);
            i = j;
        }

        return ans;
    }
};
