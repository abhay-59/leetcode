class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        int n=s.size();
        vector<string>v;
        unordered_map<string,int>mp;
        for(int i=0;i<=n-10;i++){
            mp[s.substr(i,10)]++;
        }
        for(auto i:mp){
            if(i.second>1)v.push_back(i.first);
        }
        return v;
    }
};