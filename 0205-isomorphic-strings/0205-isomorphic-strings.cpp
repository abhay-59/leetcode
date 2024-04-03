class Solution {
public:
    bool isIsomorphic(string s, string t) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        unordered_map<int,int>mp,mp1;
        for (auto i : s) {
            if (mp.count(i) == 0)
            mp[i] = mp.size();
        }
        for (auto i : t) {
            if (mp1.count(i) == 0)
            mp1[i] = mp1.size();
        }
        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] != mp1[t[i]]) return false;
        }
        return true;
    }
};