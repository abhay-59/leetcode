class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x=0;
        for(auto i:nums){
            x^=i;
        }
        string sk = bitset<32> (k).to_string();
        string sx = bitset<32> (x).to_string();
        x=0;
        for(int i=32;i>=0;i--){
            if(sx[i]!=sk[i])x++;
        }
        return x;
    }
};