class Solution {
public:
    int minOperations(int k) {
        int ans = 1e6;
        for(int i = 1;i <= k; i++) {
            int d = ceil(k / float(i * 1));
            ans = min(ans, (i-2)+d);
        }
        return ans;
    }
};