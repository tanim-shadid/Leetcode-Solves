class Solution {
public:
    bool isPalindrome(string s) {
          s.erase(remove(s.begin(), s.end(), ' '), s.end());
        string n;
         for(int i=0;i<s.size();i++)
        {
            if(iswalnum(s[i]))
            {
                if(isupper(s[i]))
                {
                    n+=(char)tolower(s[i]);
                }
                else
                    n+=s[i];

            }

        }
        bool f=true;
        int i=0;int j=n.size()-1;
        while(i<j)
        {
            if(n[i]==n[j])
            {
                i++;
                j--;
            }
            else
            {
                f=false;
                break;
            }

        }
        return f;
    }
};
