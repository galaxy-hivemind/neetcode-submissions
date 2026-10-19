class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.length();
        int n = t.length();

        if(m != n) return false;

        vector<int> freq1(26);
        vector<int> freq2(26);

        for(int i = 0; i<m; i++){
            freq1[s[i] -'a']++;
            freq2[t[i] - 'a']++;
        }

        if(freq1 == freq2) return true;
        return false;
    }
};
