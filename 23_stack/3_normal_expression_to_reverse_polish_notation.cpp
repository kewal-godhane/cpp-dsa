#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    stack<int> st;
	    string ans="";
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]>='a' && s[i]<='z')
	        {
	            ans=ans+s[i];
	        }
	        else
	        {
	            if(s[i]==')')
	            {
	                char temp=st.top();
	                st.pop();  //remove operator
	                st.pop();  // remove opening bracket
	                ans=ans+temp;
	            }
	            else
	            {
	                st.push(s[i]);
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
