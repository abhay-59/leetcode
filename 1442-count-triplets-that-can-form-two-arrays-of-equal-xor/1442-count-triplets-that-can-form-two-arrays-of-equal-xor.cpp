class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count=0;
        int n=arr.size();
        for (int i=0; i<n; i++) {
            int p = arr[i];
            for (int j=i + 1; j<n; j++) {
                p^= arr[j];
                if (p == 0) {
                    count += (j - i);
                }
            }
        }
        return count;
    }
};