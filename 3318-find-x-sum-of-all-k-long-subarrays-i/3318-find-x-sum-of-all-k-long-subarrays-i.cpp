class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        vector<int> ans;
        for(int i=0; i<=nums.size()-k; i++){
            unordered_map<int,int> mp;
            priority_queue<pair<int,int>> pq;
            for(int j=i; j<i+k; j++){
                mp[nums[j]]++;
            }
            for(auto it:mp){
                pq.push({it.second,it.first});
            }
            int count = x;
            int sum = 0;
            while(count && !pq.empty()){
                auto it=pq.top();
                pq.pop();
                sum+=it.second*it.first;
                count--;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};