// https://practice.geeksforgeeks.org/problems/sum-of-subarrays2229/1
// Q Sum of Subarrays
// Given an array A[] with N elements , you need to find the sum of all sub arrays of array A. 
// Since the sum could be very large print the sum modulo (109+7).


// Approach
// keep track of in how many subarray each element will occur , 
// for example if an element is occuring 5 times in subarrys then sum=arr[i]*5 ,
// this will be the whole contribution of this element in the result

// for example   arr->      1 2 3 4 5
//now 2 will occur in how many subarrays = no. of previous element(including the current element)* no. of next elements
// (pre)2*4(next)=8 subarrays
    long long subarraySum(long long a[], long long n)
    {
        // Your code goes here
        int mod=1000000007;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=(sum+(a[i]*((i+1)*(n-i))%mod)%mod)%mod;
        }
        return sum;
    }