// https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>>ans;
    for(int i=0;i<arr.size()-1;i++)
    {
        vector<int> temp;
        
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==s)
            {
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                sort(temp.begin(),temp.end());
                ans.push_back(temp);
                temp.clear();
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}