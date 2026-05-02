class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> countT;
        for (char ch : t) countT[ch]++;

        vector<int> res = {-1, -1};
        int min_length = INT_MAX;

        if (s.size() < t.size()) return "";

        for (int i = 0; i < s.size(); i++){
            while (i < s.size() && countT.find(s[i]) == countT.end()) i++;

            unordered_map<char, int> countS;
            for (int j = i; j < s.size(); j++){
                countS[s[j]]++;
                bool matched = true;
                for (auto p : countT){
                    if (countT[p.first] > countS[p.first]){
                        matched = false;
                        break;
                    }
                }
                if (matched && (j-i+1) < min_length){
                    min_length = min(min_length, j-i+1);
                    res[0] = i;
                    res[1] = j;
                    j = s.size();
                }
            }
        } 
        
        if (min_length == INT_MAX) return "";
        return s.substr(res[0], min_length);

    }
};
