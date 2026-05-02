class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_set<char> hash = {'(', '[', '{'};
        unordered_map<char, char> m = {{')', '('}, {'}', '{'}, {']', '['}};
        for (char ch : s){
            if (hash.contains(ch)) st.push(ch);
            else if (st.empty()) return false;
            else {
                if (st.top() == m[ch]) st.pop();
                else return false;
            }
        }
        if (st.empty()) return true;
        return false;
    }
};
