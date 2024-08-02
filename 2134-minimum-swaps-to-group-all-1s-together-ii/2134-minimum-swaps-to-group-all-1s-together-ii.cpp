class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int count=0,n=nums.size();
        for(auto i:nums){
            if(i==1)count++;
        }
        if (count == 0 || count == n) return 0;
        vector<int>v,nums1=nums;
        int cur=0;
        for(int i=0;i<count;i++){
            cur+=nums[i];
        }
        v.push_back(cur);
        for(auto i:nums){
            nums1.push_back(i);
        }
        n=nums1.size();
        cout<<n<<" "<<count;
        for(int i=0;i<(n-count);i++){
            cur-=nums1[i];
            cur+=nums1[i + count];
            v.push_back(cur);
        }
        int mx=*max_element(v.begin(),v.end());
        return count-mx;
    }
};