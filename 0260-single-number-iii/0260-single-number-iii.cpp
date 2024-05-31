class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr=0;
        for(auto i:nums)xr^=i;
        int i=__builtin_ffs(xr)-1;
        int a=0, b=0;
        for(auto j: nums){
            if (((j >> i) & 1) == 0)
                a^=j;
            else
                b^=j; 
        }
        return {a,b};
    }
};