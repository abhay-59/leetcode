class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(1001,0),ans1;
        unordered_map<int,int>mp;
        for(auto i:nums1)mp[i]++;
        for(auto i:nums2){
            if(mp.find(i)!=mp.end()){
                ans[i]++;
            }
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]){
                ans1.push_back(i);
            }
        }
        return ans1;
    }
};