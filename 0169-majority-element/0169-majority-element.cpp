class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int num=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==num)
            {
                count++;
                //if(count>n/2)return nums[i];
            }
            else
                count--;
            if(count==0){
                count=1;
                num=nums[i];
            }
        }
        return num;
    }
};