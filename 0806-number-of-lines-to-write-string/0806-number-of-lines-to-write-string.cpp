class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 0;
        int typeLine = 0;
        for(auto x:s) {
            if(typeLine + widths[x-'a'] <= 100)
                typeLine += widths[x-'a'];
            else {
                lines++;
                typeLine = widths[x-'a'];
            }
        }
        if (typeLine != 0) lines++;
        vector<int> ans;
        ans.push_back(lines);
        ans.push_back(typeLine);
        return ans;
    }
};