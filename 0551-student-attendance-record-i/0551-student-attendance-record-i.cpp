class Solution {
public:
    bool checkRecord(string s) {
        int count=0;
        if(s.find("LLL")!=string::npos)return false;
        for(char i:s){
            if(i=='A')count++;
        }
        if(count>=2)return false;
        return true;
    }
};