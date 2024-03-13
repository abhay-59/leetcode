class Solution {
public:
    int pivotInteger(int n) {
        int sum=0;
        for(int i=1;i<=n;i++){
            int sum1=(n*(n+1))/2;
            sum+=i;
            sum1-=sum;
            sum1+=i;
            if(sum==sum1)return i;
        }
        return -1;
    }
};