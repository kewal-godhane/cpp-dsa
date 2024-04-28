// https://leetcode.com/problems/unique-number-of-occurrences/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        int count=1;
        vector<int>vt;
        for(int i=0;i<arr.size();i++)
        {
            if(mp.find(arr[i])!=mp.end())
            {
                // int temp=mp[arr[i]];
                // temp++;
                // mp[arr[i]]=temp;
                mp[arr[i]]++;
            }
            else
            {
                mp.insert({arr[i],count});
            }
        }
        auto it=mp.begin();
        while(it!=mp.end())
        {
            vt.push_back(it->second);
            it++;
        }
        sort(vt.begin(),vt.end());
        for(int i=0;i<vt.size()-1;i++)
        {
            if(vt[i]==vt[i+1])
            {
                return false;
            }
        }
        return true;
    }
};