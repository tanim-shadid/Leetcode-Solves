class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<char> st;
        string f;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ']') {
                string tem = "";
                while (st.top() != '[') {
                    tem = st.top() + tem;
                    st.pop();
                }
                st.pop();
                int number = num.top();
                num.pop();
                while (number--) {
                    for (int i = 0; i < tem.size(); i++) {
                        st.push(tem[i]);
                    }
                }

            } else {
                if (isdigit(s[i])) {
                    int k = 0;
                    while (i < s.size() && isdigit(s[i])) {
                        k = k * 10 + (s[i] - '0');
                        i++;
                    }
                    num.push(k);
                    i--;
                } else {
                    st.push(s[i]);
                }
            }
        }
        while (!st.empty()) {
            f = st.top() + f;
            st.pop();
        }

        return f;
    }
};
