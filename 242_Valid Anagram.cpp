class Solution {
public:
    bool isAnagram(string s, string t) {
         sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       bool f=true;
       int cnt=0;
       if(s.size()!=t.size())
       return false;
       else
       {
      for(int i=0;i<s.size();i++)
      {
        if(s[i]!=t[i])
        {
          f=false;
        }
      }
       }
      return f;
    }
};
