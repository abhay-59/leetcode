class Solution {
public:
    int solve(int x, int y)
    {
        int count = 0;
        for (int i = 0; i < 32; i++) {
            if (((x >> i) & 1) != ((y >> i) & 1)) {
                count++;
            }
        }
        return count;
    }
    int minOperations(vector<int>& nums, int k) {
        int x=0;
        for(auto i:nums){
            x^=i;
        }
        return solve(x,k);
    }
};