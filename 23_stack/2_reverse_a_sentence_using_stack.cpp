#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reverseString(string s)
{
    stack<string> st;
    for(int i=0;i<s.length();i++)
    {
        string str="";
        while (s[i]!=' ' && i<s.length())
        {
            str+=s[i];
            i++;
        }
        st.push(str);
        
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}
int main()
{
    string s1="hey how are you doing?";
    reverseString(s1);
    return 0;
}

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<8-3*2-(1+1);
//     return 0;
// }