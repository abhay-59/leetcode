class Solution {
public:
    vector<string> split(string str, char delimiter)
    {
        stringstream ss(str);
        vector<string> res;
        string token;
        while (getline(ss, token, delimiter)) {
            res.push_back(token);
        }
        return res;
    }
    string reverseWords(string s) {
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