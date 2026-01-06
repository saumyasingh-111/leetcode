// 242. valid anagra,

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        bool check=false;
        int n=s.size();
        int m=t.size();
        if(n!=m){
            check=false;
        }
        if(s==t){
            check=true;
        }else{
            check=false;
        }
        return check;
    }
};