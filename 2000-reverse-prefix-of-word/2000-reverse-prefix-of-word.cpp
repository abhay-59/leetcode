class Solution {
public:
    string reversePrefix(string& word, char ch) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        int ind=-1;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                ind=i;
                break;
            }
        }
        if (ind==-1) return word;
        for(int i=0; i<=ind/2; i++)
            swap(word[i], word[ind-i]);
        return word;
    }
};