// https://leetcode.com/problems/evaluate-reverse-polish-notation/


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long int> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+")
            {
                long long int first=st.top();
                st.pop();
                long long int second=st.top();
                st.pop();
                long long int ans=(first+second);
                st.push(ans);
            }
            else if(tokens[i]=="-")
            {
                int first=st.top();
                st.pop();
                int second=st.top();
                st.pop();
                long long int ans=second-first;
                st.push(ans);
            }
            else if(tokens[i]=="*")
            {
                long long int first=st.top();
                st.pop();
                long long int second=st.top();
                st.pop();
                long long int ans=(first*second);
                st.push(ans);
            }
            else if(tokens[i]=="/")
            {
                long int first=st.top();
                st.pop();
                long long int second=st.top();
                st.pop();
                long long int ans=second/first;
                st.push(ans);
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};