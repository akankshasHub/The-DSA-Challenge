/* GeeksforGeeks Problem
Link to Problem Description - https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1 */

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    int diff,min,max;
    int j,i,v;
    v=m-1;
    sort(a.begin(),a.end());
    min=(a[v]-a[0]);
    for(i=1,j=v+1;j<n;i++,j++)
    {
        max=a[j]-a[i];
        if(min>max)
        {
            min=max;
        }
    }
    
    return min;
    }   
};