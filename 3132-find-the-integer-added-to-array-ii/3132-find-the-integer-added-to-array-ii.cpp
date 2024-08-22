class Solution {
public:
    bool isPossible(vector<int>& A, unordered_map<int, int> freq, int x) {
        int pending = A.size();
        for (int i: A) {
            if (freq.count(i + x)) {
                freq[i+x]--;
                if (freq[i+x] < 1)
                    freq.erase(i+x);
                pending--;
            } 
        }
        return pending == 2;
    }
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        for (int i: nums2) {
            freq[i]++;
        }
        for (int i = -1001; i <= 1000; i++) {
            if (isPossible(nums1, freq, i)) {
                return i;
            }
        }
        return -1;
    }
};