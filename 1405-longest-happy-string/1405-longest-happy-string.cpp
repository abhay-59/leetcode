class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        if(a)pq.push({a,'a'});
        if(b)pq.push({b,'b'});
        if(c)pq.push({c,'c'});
        string s="";
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            if(s.size()>=2 && s[s.size()-1]==it.second && s[s.size()-2]==it.second){
                if(pq.empty())break;
                auto j=pq.top();
                pq.pop();
                s+=j.second;
                j.first--;
                if(j.first)pq.push({j.first,j.second});
            }
            else{
                it.first--;
                s+=it.second;
            }
            if(it.first){
                pq.push({it.first,it.second});
            }
        }
        return s;
    }
};