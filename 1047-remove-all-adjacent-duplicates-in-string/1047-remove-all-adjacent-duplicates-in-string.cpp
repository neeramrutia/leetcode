#include<bits/stdc++.h>
class Solution {
public:
    stack<char> st;
    string removeDuplicates(string s) {
       for (int i = 0; i < s.size(); i++)
    {

        if (st.empty())
        {
            st.push(s[i]);
            continue;
        }
        if (st.top() == s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    string ans;
    while (!st.empty())
    {
        ans = st.top() + ans;
        st.pop();
    }
    return ans;
    }
};