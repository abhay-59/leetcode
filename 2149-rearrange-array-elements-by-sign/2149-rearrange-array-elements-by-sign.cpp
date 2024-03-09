class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i1=0,i2=0;
        vector<int>ans,v1,v2;
        for(auto i:nums){
            if(i<0)v2.push_back(i);
            else v1.push_back(i);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            ans.push_back(v1[i1++]);
            else
            ans.push_back(v2[i2++]);
        }
        return ans;
    }
};