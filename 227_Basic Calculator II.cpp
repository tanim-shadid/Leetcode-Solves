class Solution {
public:
    int calculate(string s) {
        stack<int>st;
        int num=0;
        char sign='+';
        for(int i=0;i<s.size();i++)
        {
            char current=s[i];
            if(isdigit(current))
            {
                num=num*10+(current-'0');
            }
            if(!isdigit(current)&& current!=' ' || i==s.size()-1)
            {
                if(sign=='+')
                {
                    st.push(num);
                }
                else if(sign=='-')
                {
                    st.push(-num);
                }
                else if(sign=='*')
                {
                    int tem=st.top();
                    st.pop();
                    st.push(tem*num);
                }
                else
                {
                    int tem=st.top();
                    st.pop();
                    st.push(tem/num);
                }
                num=0;
                sign=current;

            }
        }
        int ans=0;
        while(!st.empty())
        {
           ans+=st.top();
           st.pop();
        }
        return ans;
    }
};
