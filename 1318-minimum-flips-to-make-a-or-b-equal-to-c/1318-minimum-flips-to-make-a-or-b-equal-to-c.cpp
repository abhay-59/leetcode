class Solution {
public:
    int minFlips(int a, int b, int c) {
        string sc = bitset<32> (c).to_string();
        string sa = bitset<32> (a).to_string();
        string sb = bitset<32> (b).to_string();
        int count=0;
        for(int i=32;i>=0;i--){
            if(sc[i]=='0'){
                if(sa[i]=='0' && sb[i]=='0'){}
                else if(sa[i]=='1' && sb[i]=='1'){count+=2;}
                else count++;
            }
            else{
                if(sa[i]=='0' && sb[i]=='0')count++;
            }
        }
        return count;
    }
};