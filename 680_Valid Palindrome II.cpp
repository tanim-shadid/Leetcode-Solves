class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.size();
        int cnt=0;
        int l=0,r=n-1;
        while(l<r)
        {
            if(s[l]!=s[r])
            {
                cnt++;
                r--;
            }
            else
            {
                l++;
                r--;
            }
        }
         l=0,r=n-1;
        int cnt2=0;
          while(l<r)
        {
            if(s[l]!=s[r])
            {
                cnt2++;
                l++;
            }
            else
            {
                l++;
                r--;
            }
        }
        if(cnt<=1 || cnt2<=1)return true;
        return false;
    }
};
