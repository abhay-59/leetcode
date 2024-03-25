class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n+1,0);
        for(int i=0;i<n;i++){
            v[nums[i]]++;
        }
        nums.clear();
        for(int i=0;i<v.size();i++){
            if(v[i]==2){
                nums.push_back(i);
            }
        }
        return nums;
    }
};