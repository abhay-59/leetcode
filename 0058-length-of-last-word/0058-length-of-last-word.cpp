class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int e=-1;
        cout<<s.size()<<endl;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]!=' '){e=i;
            break;
            }
        }
        cout<<e<<endl;
        for(int i=e;i>=0;i--){
            if(s[i]==' ')
            break;
            else count++;
        }
        return count;
    }
};