class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size(), res = n+1, window = 0,i=0;
        vector<int> setbits(32, 0);
        for (int j = 0; j < n; j++) {
            int rightin = nums[j];
            for (int b = 0; b < 32; b++) {
                if (rightin & (1 << b))
                    setbits[b]++;
            }
            window |= rightin;

            while (i <= j and window >= k) {
                res = min(res, j - i + 1);
                int left = nums[i++];
                window = 0;
                for (int b = 0; b < 32; b++) {
                    if (left & (1 << b))
                        setbits[b]--;
                    if (setbits[b] > 0)
                        window |= (1 << b);
                }
            }
        }
        return res == n+1 ? -1 : res;
    }
};