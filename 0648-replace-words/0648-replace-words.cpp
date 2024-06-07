class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        istringstream ss(sentence);
        vector<string>v;
        string word,res;
        while (ss >> word) 
            v.push_back(word);
        unordered_map<string,int>mp;
        for(auto i:dictionary)mp[i]++;
        string ans = "";
        int i = 0;
        while (i < sentence.length()) {
            string word = "";
            bool skip = false;
            while (i < sentence.length() && sentence[i] != ' ') {
                if (skip) {
                    i++;
                    continue;
                } 
                word += sentence[i++];
                if (mp.count(word)) {
                    skip = true;
                }
            }
            ans += word;
            if (i < sentence.length() && sentence[i] == ' ') {
                ans += " ";
            }
            i++;
        }
        return ans;
    }
};