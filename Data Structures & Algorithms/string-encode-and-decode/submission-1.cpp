class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string ans;
        for(int i = 0; i<n; i++){
            int m = strs[i].length();
            ans += to_string(m) + '#' + strs[i];
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while (i < s.length()) {
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));
            string temp = s.substr(j + 1, len);

            ans.push_back(temp);
            i = j + 1 + len;
        }

        return ans;
    
    }
};
