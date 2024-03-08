class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=101;
        vector<int>v(n,0);
        for(auto i:nums)
        {
            v[i]++;
        }
        int sum=0;
        int mx=*max_element(v.begin(),v.end());
        for(auto i:v){
            if(i==mx)
                sum+=i;
        }
        return sum;
    }
};