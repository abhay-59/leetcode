class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        unordered_map<int,int>mp;
        for(auto i:edges){
            mp[i[0]]++;
            mp[i[1]]++;
        }
       int max_count=0,res=-1; 
        for(auto i:mp) { 
            if (max_count<i.second) { 
                res=i.first; 
                max_count=i.second; 
            } 
        } 
    return res; 
    }
};