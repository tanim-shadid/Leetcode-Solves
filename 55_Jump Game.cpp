class Solution {
public:
    bool canJump(vector<int>& v) {
        int n=v.size()-1;
        int g=n;
        //if(v.size()==1)return true;
        for(int i=n-1;i>=0;i--)
        {
            if(i+v[i]>=g)
            {
                g=i;
            }
        }
        if(g==0)return true;
        else
        return false;
    }
};
