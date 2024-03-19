class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int s=tasks.size();
        vector<int>ch(26,0);
        for(auto i : tasks){
            ch[i-'A']++;
        }
        int mx=*max_element(ch.begin(),ch.end());
        int cnt=0;
        for(int i=0; i<26; i++){
            if (ch[i]==mx){
                cnt++;
            }
        }
        mx--;
        n++;
        return max((mx*n)+cnt, s);
    }
};