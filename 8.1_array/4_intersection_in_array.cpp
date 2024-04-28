// https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
// two pointer in both the arrays and iterate over the elements
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
    vector<int> vt;
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            vt.push_back(arr1[i]);
            i++;
            j++;	
        }
        if(arr1[i]>arr2[j])
        {
            j++;
        }
        if(arr1[i]<arr2[j])
        {
            i++;
        }
    }
    if(vt.size()==0)
        vt.push_back(-1);
    return vt;
}
