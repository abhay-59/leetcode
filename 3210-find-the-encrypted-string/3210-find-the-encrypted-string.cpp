class Solution {
public:
    void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}
    string getEncryptedString(string s, int k) {
        //if(k==1)return s;
        k=k%s.size();
        leftrotate(s,k);
        return s;
    }
};