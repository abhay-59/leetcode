class Solution {
public:
    long long minimumSteps(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        long long ans=0,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')count++;
            else{
                ans+=count;
                //count=0;
            } 
        }
        return ans;
    }
};