class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        int ss=0,cs=0;
        for(auto i:students){
            if(i==1)ss++;
            else cs++;
        }
        for(auto i:sandwiches){
            if(i==1){
                if(ss>0)ss--;
                else break;
            }
            else{
                if(cs>0)cs--;
                else break;
            }
        }
        return ss+cs;
    }
};