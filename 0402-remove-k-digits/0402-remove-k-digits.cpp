class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        if(k==num.size())return "0";
        vector<char>v;
        int n=num.size();
        for(int i=0;i<n;i++){
            while(k>0 && !v.empty() && v.back()>num[i]){
                k--;
                v.pop_back();
            }
            v.push_back(num[i]);
        }
        while(k--){
            v.pop_back();
        }
        int cnt=0;
        for(auto i:v){
            if(i=='0'){
                if(cnt>0)ans+=i;
            }
            else{
                cnt++;
                ans+=i;
            }
        }
        if(ans.empty())return "0";
        return ans;
    }
};