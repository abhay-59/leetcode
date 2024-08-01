class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        for(auto i:details){
            //return (int(i[13])-48);
            int f=(int(i[11])-48);
            int s=(int(i[12])-48);
            if(f>6 || (f==6 && s>0))count++;
        }
        return count;
    }
};