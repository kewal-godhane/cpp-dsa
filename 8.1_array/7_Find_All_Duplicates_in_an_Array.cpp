// https://leetcode.com/problems/find-all-duplicates-in-an-array/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        vector<int>vt;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                mp[nums[i]]++;
                if(mp[nums[i]]==2)
                {
                    vt.push_back(nums[i]);
                }
            }
            else
            {
                mp.insert({nums[i],1});
            }
        }
        return vt;
    }
};