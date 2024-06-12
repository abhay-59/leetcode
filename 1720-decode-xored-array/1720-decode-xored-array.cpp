class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int prev=first;
        vector<int>res;
        res.push_back(first);
        for(auto i:encoded){
            res.push_back(i^prev);
            prev=i^prev;
        }
        return res;
    }
};