class Solution {
public:
    string reversePrefix(string& word, char ch) {
        int ind=-1;
        ind=word.find(ch);
        if (ind==-1) return word;
        for(int i=0; i<=ind/2; i++)
            swap(word[i], word[ind-i]);
        return word;
    }
};