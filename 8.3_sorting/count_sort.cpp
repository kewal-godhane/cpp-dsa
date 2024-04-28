static const int N=200;
int a[N]={0};
string countSort(string arr){
    for(int i=0;i<arr.length();i++)
    {
        a[arr[i]]++;
    }
    string ans="";
    for(int i=0;i<N;i++)
    {
        if(a[i]!=0)
        {
            for(int j=0;j<a[i];j++)
            {
                ans=ans+(char)i;
            }
        }
    }
    return ans;
}