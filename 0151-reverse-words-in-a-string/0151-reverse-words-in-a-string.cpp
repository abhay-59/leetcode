class Solution {
public:
    string reverseWords(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stringstream ss(s);
        string word;
        vector<string> v;
        while (ss >> word) {
            v.push_back(word);
        }
        reverse(v.begin(),v.end());
        string k="";
        for (int i=0;i<v.size();i++) {
            k += v[i];
            if (i != v.size()-1) {
                k += " ";
            }
        }
        //k.pop_back();
        return k;
    }
};