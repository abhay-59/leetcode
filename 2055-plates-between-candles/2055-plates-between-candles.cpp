class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int>pref,plates,next,res;
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='|')sum++;
            pref.push_back(sum);
        }
        int plate=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='|')plate=i;
            plates.push_back(plate);
        }
        plate=0;
        for(int i=s.size();i>=0;i--){
            if(s[i]=='|')plate=i;
            next.push_back(plate);
        }
        reverse(next.begin(),next.end());
        for (auto i : queries) {
            int f = next[i[0]], s = plates[i[1]];
            if(i[0]==i[1])res.push_back(0);
            else if(f<s){
                res.push_back(s-f-pref[s]+pref[f]);
            }
            else res.push_back(0);
        }
        return res;
   }
};