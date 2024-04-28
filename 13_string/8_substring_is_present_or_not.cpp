#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    

    int i=0;
    int j=0;
    int l1=s1.length();
    int l2=s2.length();

    int count=0;
    while(i<l1 && j<l2)
    {
        if(s1[i]==s2[j])
        {
            count++;
            i++;
            j++;

            if(count==l2)
            {
                cout<<"yes";
                break;
            }

        }
        else{
            i=i-count;
            count=0;
            j=0;
            i++;
        }

    }
    if(j<l2)
    cout<<"no";

    return 0;
}

