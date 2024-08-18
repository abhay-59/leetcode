class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++) {
            int zero=0,one=0;
            for(int j=i;j<n;j++) {
                if(s[j]=='0')
                    zero++;
                else
                    one++;
                if(one<=k || zero<=k)
                    ans++;
            }
        }
        return ans;
    }
};