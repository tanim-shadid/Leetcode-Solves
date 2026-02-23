class Solution {
public:
    int calPoints(vector<string>& s) {
        int n=s.size();
        stack<int>st;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=="+")
            {
                int first=st.top();
                st.pop();
                int second=st.top()+first;
               st.push(first);
               st.push(second);
            }
            else if(s[i]=="D")
            {
                st.push(st.top()*2);
            }
            else if(s[i]=="C")
            {
                st.pop();
            }
            else
            {
                st.push(stoi(s[i]));
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;

    }
};
