class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(auto i:nums)mp[i]++;
        int x=0,y=0;
        for(auto i:nums){
            if(mp[i])mp[i]--;
            if(mp[i]==0)mp.erase(i);
            int diff=target-i;
            if(mp.find(diff)!=mp.end()){
                x=i;
                y=diff;
                break;
            }
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x)ans.push_back(i);
            else if(nums[i]==y)ans.push_back(i);
        }
        return ans;
    }
};