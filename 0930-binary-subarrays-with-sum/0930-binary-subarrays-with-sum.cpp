class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int j = 0, count = 0, res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                goal--;
                count = 0;
            }
            while (goal == 0 && j <= i) {
                goal += nums[j];
                j++;
                count++;
            }
            while (goal < 0) {
                goal += nums[j];
                j++;
            }
            res += count;
        }
        return res;
    }
};