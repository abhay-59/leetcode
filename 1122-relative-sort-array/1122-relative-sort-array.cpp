class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        //for(auto i:arr2)mp[i]++;
        for(auto i:arr1)mp[i]++;
        vector<int> ans;
        for(int i = 0; i < arr2.size(); i++) {
            while(mp[arr2[i]]--) {
                ans.push_back(arr2[i]);
            }
        }
        for(int i = 0; i < mp.size(); i++) {
            while(mp[i]-- > 0) ans.push_back(i);
        }
        return ans;
    }
};