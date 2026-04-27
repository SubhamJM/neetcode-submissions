class Solution {
public:
    bool valid(vector<int> &piles, int k, int h){
        int count = 0;
        for (int i : piles){
            count += i/k;
            if (i%k) count++;
        }
        return (count <= h);
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int ans = r;

        while (l <= r){
            int m = (l+r)/2;
            if (valid(piles, m, h)){
                ans = m;
                r = m-1;
            }
            else l = m+1;
        }
        return ans;
    }
};
