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
    int minBitFlips(int start, int goal) {
        return solve(start,goal);
    }
};