class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<vector<double>> ps(n, vector<double>(3));
        for(int i = 0; i<n; i++){
            ps[i][0] = position[i];
            ps[i][1] = speed[i];
            ps[i][2] = (double)(target - position[i])/speed[i];
        }

        sort(ps.begin(), ps.end());
        stack<double> st;

        for(int i = n-1; i>=0; i--){
            if(st.empty()){
                st.push(ps[i][2]);
            } else {
                if(st.top() < ps[i][2]){
                    st.push(ps[i][2]);
                }
            }
            
        }
        return st.size();
    }
};
