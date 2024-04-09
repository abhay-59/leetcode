class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        int time = 0,n = tickets.size();
    for(int i = 0;i < n;i++){
        if(i < k){
            time = time + min(tickets[k],tickets[i]);
        }
        else if(i == k){
            time = time + tickets[i];
        }
        else{
          time = time + min(tickets[k]-1,tickets[i]);  
        }
    }
    return time;
}
};