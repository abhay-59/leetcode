class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)return true;
        if(n<=0)return false;
        float x=log(n)/log(4);
        //cout<<x<<endl;
        return x==int(x);
    }
};