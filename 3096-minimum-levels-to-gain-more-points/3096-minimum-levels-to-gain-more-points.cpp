class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int mx=0;
        int n=possible.size();
        for(auto i:possible){
            if(i==0)mx+=-1;
            else mx+=i;
        }
        vector<int>pre;
        int sum=0;
        for(auto i:possible){
            if(i==0)sum+=-1;
            else sum+=i;
            pre.push_back(sum);
        }
        int count=0;
        sum=0;
        for(int i=0;i<n-1;i++){
                if(pre[i]>mx-pre[i]){
                return i+1;
            }
        }
        return -1;
    }
};