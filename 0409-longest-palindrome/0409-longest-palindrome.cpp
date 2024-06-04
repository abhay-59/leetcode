class Solution {
public:
    int longestPalindrome(string s) {
        int fl=0,ans=0;
        unordered_map<char,int>freq;
        for(auto i:s){
            freq[i]++;
            if (freq[i]%2==1)
                fl++;
            else
                fl--;
        }
        if (fl>1)
            return s.length()-fl+1;
        return s.length();
    }
};