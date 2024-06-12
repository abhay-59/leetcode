class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>v(3,0);
        for(auto i:nums)v[i]++;
        int k=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i];j++)
            {
                nums[k++]=i;
            }
        }
        //return v;
    }
};