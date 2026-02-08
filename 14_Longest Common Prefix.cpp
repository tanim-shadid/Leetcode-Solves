class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a,b;
        int cnt=0;
        for(int i=0;i<strs.size();i++)
        {
            if(i==0)a=strs[i];
            else
            {
                for(int j=0;j<strs[i].size();j++)
                {
                   if(strs[i][j]==a[j])
                   {
                    b+=a[j];
                   }
                   else
                   {
                     break;
                   }
                }
                a=b;
                b="";
            }
        }

        return a;
    }
};
