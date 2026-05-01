class Solution {
public:
    bool isvalid(unordered_map<char, int> &m, int k){
        int maximum = 0;
        int sum = 0;
        for (auto p : m){
            if (p.second > maximum){
                maximum = p.second;
            }
            sum += p.second;
        }
        return (sum - maximum <= k);

    }
    int characterReplacement(string s, int k) {
        unordered_map<char, int> m;
        int n = s.size();
        int l = 0;
        int maximum_length = 1;
        for (int r = 0; r < n; r++){
            m[s[r]]++;
            if (!isvalid(m, k)){
                maximum_length = max(maximum_length, r-l);
                while (l < n && !isvalid(m, k)){
                    m[s[l]]--;
                    l++;
                }
            }

        }

        maximum_length = max(maximum_length, n-l);
        return maximum_length;
    }
};
