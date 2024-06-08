class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        //for(auto i:nums)mp[i]++;
        int s=0,r=0,prev=0;
        for(auto i:nums){
            s+=i;
            r=s%k;
            if(mp.count(r))
                return true;
            mp.insert({prev,1});
            prev=r;
        }
        return false;
    }
};