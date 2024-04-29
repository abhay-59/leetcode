class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count=0;
        int flag=0;
        for(int i=0;i<32;i++){
            flag=0;
            if(((1<<i)&c)>0) flag=1;
            if(!flag){
                if((a&(1<<i))!=0 && (b&(1<<i))!=0) count+=2;
                else if((a&(1<<i))!=0 || (b&(1<<i))!=0) count++;
            }
            else if(flag){
                if((a&(1<<i))==0 && (b&(1<<i))==0) count++;
            }
        }
        return count;
    }
};