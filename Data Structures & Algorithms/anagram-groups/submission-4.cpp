class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;

        unordered_map<string, vector<string>> m;
        for (string str : strs){
            string word = str;
            sort(word.begin(), word.end());
            m[word].push_back(str);
        }

        for (auto p : m){
            answer.push_back(p.second);
        }
        return answer;
    }
};
