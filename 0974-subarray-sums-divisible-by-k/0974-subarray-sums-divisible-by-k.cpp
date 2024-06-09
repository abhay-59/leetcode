class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[0]++;
        int pref = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            pref += nums[i];
            int r = pref % k;
            if (r < 0)
                r+=k;
            if (map.count(r)) {
                count += map[r];
                map[r]++;
            } else {
                map[r] = 1;
            }
        }
        return count;
    }
};