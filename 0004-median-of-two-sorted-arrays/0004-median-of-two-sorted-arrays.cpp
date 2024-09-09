class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int m=nums1.size(), n=nums2.size();
        for(auto i:nums2){
            nums1.push_back(0);
        }
        int i=m-1,j=n-1;
        int k=n+m-1;
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j])nums1[k--]=nums1[i--];
            else nums1[k--]=nums2[j--];
        }
        if(j>=0){
            while(j >= 0){
                nums1[k--] = nums2[j--];
            }
        }
        // for(auto i:nums1){
        //     cout<<i<<endl;
        // }
        n=nums1.size();
        double x;
        if(n&1){
            x=nums1[n/2];
        }
        else{
            double div=2;
            x=(nums1[n/2-1]+nums1[n/2])/div;
        }
        return x;
    }
};