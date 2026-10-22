class MinStack {
stack<pair<int, int>> st;
public:
    MinStack() {
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(make_pair(val, val));
            return;
        }
        st.push(make_pair(val, min(val, st.top().second)));
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
