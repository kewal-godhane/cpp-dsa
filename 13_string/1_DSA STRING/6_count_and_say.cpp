#include<bits/stdc++.h>
using namespace std;
string countAndSay(int n) {
    // return "123";
    string curr="11";
    for(int i=3;i<=n;i++)
    {
        string tempstr="";
        int tempcount=1;
        for(int j=0;j<curr.length()-1;j++)
        {
            bool allow=true;
            char val=curr[j];
            if(curr[j]!=curr[j+1])
            {
                tempstr=tempstr+to_string(tempcount)+val;
                tempcount=1;
                allow=false;
            }
            if(j+1==curr.length()-1 )
            {
                if(allow)
                    tempcount++;
                val=curr[j+1];
                tempstr=tempstr+to_string(tempcount)+val;
                j++;
            }
            if(allow)
            tempcount++;
        }
        curr=tempstr;
    }
    if(n==1)
    {
        return "1";
    }
    return curr;
}
int main()
{
    int n;
    cin>>n;
    cout<<countAndSay(n);
    return 0;
}