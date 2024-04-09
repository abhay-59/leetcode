class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
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