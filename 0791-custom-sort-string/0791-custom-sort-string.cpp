class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char,int>mp;
        for(char i:s)mp[i]++;
        for(auto i:order){
            if(mp.find(i)!=mp.end()){
                if(mp[i]==0)mp.erase(i);
                while(mp[i]!=0){
                ans.push_back(i);mp[i]--;}
            }
        }
        for(auto &it : mp){
            ans.append(it.second,it.first);
        }
        return ans;
    }
};