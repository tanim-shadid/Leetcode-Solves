class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string>ans;
        map<string,int>m;
        for(int i=0;i<n;i++)
        {
            if(i==0)ans.push_back(words[i]);
            else
            {
                string a=words[i];
                string b=words[i-1];
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
                if(a!=b)
                {
                    ans.push_back(words[i]);
                }

            }

        }

        return ans;
    }
};
