class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int ind=-1,mn=0;
        for (int i = 0; i < n; i++) {
            gas[i] -= cost[i];
            if (i > 0) gas[i] += gas[i - 1];
            if (gas[i]<mn) {
                mn = gas[i];
                ind = i;
            }
            //cout<<gas[i]<<" ";
        } 
        //cout<<endl;
        if(gas[n-1]<0)return -1;
        return ind+1;
    }
};