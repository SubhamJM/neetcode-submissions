class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n == 0) return 0;
        int back = 0;
        int max_length = 1;
        unordered_set<char> se;
        se.insert(s[0]);
        for (int front = 1; front < n; front++){
            if (se.contains(s[front])){
                max_length = max(max_length, front-back);
                while (se.contains(s[front])){
                    se.erase(s[back]);
                    back++;
                }

            }
            se.insert(s[front]);
            
            
        }

        max_length = max(max_length, n-back);

        return max_length;
    }
};
