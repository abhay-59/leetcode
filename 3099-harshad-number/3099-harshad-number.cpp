class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0,org=x;
        while (x > 0) {
            sum+=x%10;
        x = x / 10;
       }
        if(org%sum==0)return sum;
        return -1;
    }
};