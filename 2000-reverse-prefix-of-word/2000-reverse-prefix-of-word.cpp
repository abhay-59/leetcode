class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind=-1;
        //string t="";
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){ind=i;break;}
        }
        if(ind==-1)return word;
        string s=word.substr(0,ind+1);
        reverse(s.begin(),s.end());
        for(int i=ind+1;i<word.size();i++){
            s.push_back(word[i]);
        }
        return s;
    }
};