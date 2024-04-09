class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        int n=tickets.size(),count=0;
        while(tickets[k]>0){
        for(int i=0;i<n;i++){
            if(tickets[i] && tickets[k]){
                tickets[i]--;
                count++;
            }
        }
        }
        return count;
    }
};