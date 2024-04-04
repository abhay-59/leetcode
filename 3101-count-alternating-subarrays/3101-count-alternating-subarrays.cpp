class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long n=nums.size(),ind=0,sum=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                long long len=i-ind;
                sum+=(len*(len+1))/2;
                ind=i;
            }
        }
        long long res=n-ind;
        sum+=(res*(res+1))/2;
        return sum;
    }
};