class Solution {
public:
    int cpl(int n){
        int bits = floor(log2(n)) + 1;
        unsigned int p=(1<<bits);
        p-=1;
        p=p^n;
        return p;
    }
    int findComplement(int num) {
        return cpl(num);
    }
};