class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if (n > m) return false;

        sort(s1.begin(), s1.end());
        int l = 0;
        int r = n-1;
        while (r < m){
            string sub = s2.substr(l, n);
            sort(sub.begin(), sub.end());
            if (sub == s1) return true;
            l++;
            r++;
        }


        return false;
    }
};
