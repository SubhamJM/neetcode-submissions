class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> answer;
        unordered_map<int, int> m;
        for (int i : nums){
            m[i]++;
        }

        int n = nums.size();

        vector<vector<int>> bucket(n + 1, vector<int>());
        for (auto p : m){
            bucket[p.second].push_back(p.first);
        }

        for (int i = bucket.size()-1; i >= 0 && k > 0;i--){
            while (!bucket[i].empty() && k > 0){
                answer.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }

        return answer;
    }
};
