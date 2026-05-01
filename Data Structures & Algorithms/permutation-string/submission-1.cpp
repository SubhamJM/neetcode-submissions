class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26, 0);
        vector<int> currFreq(26, 0);
        for (char ch : s1){
            freq[ch-'a']++;
        }

        int l = 0;
        int r = 0;

        while (l < s2.size()){
            while (l < s2.size() && freq[s2[l]-'a'] == 0) l++;

            r = l;
            while (r < min(s2.size(), l + s1.size())){
                currFreq[s2[r]-'a']++;
                r++;
            }

            bool matched = true;

            for (int i = 0; i < 26; i++){
                if (freq[i] != currFreq[i]){
                    matched = false;
                }
                currFreq[i] = 0;
            }

            if (matched) return true;

            l++;
        }
        return false;
    }
};
