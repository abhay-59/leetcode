class Solution {
public:
    bool check(long long mid,vector<int>& ranks, int cars){
        long long c=0;
        for(auto i:ranks){
            c+=sqrt(mid/i);
        }
        return c>=cars;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        long long l=1;
        long long r=*max_element(ranks.begin(),ranks.end());
        r=r*cars*cars;
        while(l<r){
            long long mid=l+(r-l)/2;
            if(check(mid,ranks,cars))r=mid;
            else l=mid+1;
        }
        return l;
    }
};