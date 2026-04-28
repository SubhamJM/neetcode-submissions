class Solution {
public:
    bool isPalindrome(string s) {
        string reduced = "";

        for (char ch : s){
            if (isalpha(ch)){
                reduced.push_back(tolower(ch));
            }
            if (isdigit(ch)){
                reduced.push_back(ch);
            }
        }
        int l = 0, r = reduced.size()-1;
        while (l < r){
            if (reduced[l] != reduced[r]) return false;
            l++; r--;
        }

        return true;
    }
};
