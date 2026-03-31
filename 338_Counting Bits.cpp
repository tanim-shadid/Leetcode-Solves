class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1);
        int power=1;
        for(int i=1;i<=n;i++)
        {
            if(power*2==i)
            {
                power=i;
            }
            v[i]=v[i-power]+1;
        }
        return v;
    }
};
